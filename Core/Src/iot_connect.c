/*
 * iot_connect.c
 *
 *  Created on: Dec 16, 2023
 *      Author: NGUYEN_THANH_CONG
 */


/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "iot_connect.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "SEGGER_RTT.h"
#include <string.h>
#include <stdio.h>
#include "lwipopts.h"
#include "lwip/sockets.h"
#include "lwip/sys.h"
#include "lwip/debug.h"

#include "lwip.h"
#include "test_data.h"
#include "math.h"
/* USER CODE END Includes */



/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
typedef enum
{
	CREATE_SOCKET = 0,
	CONNECT_SOCKET = 1,
	SEND_MSG_SOCKET = 2,
	RECEIVE_MSG_SOCKET = 3,
	HANDLE_MSG_SOCKET = 4,
	CLOSE_SOCKET = 5,
	RECREATE_SOCKET = 6,
}socket_state;

typedef struct msg_t
{
	char msg[4096];
	int index_msg;
	int len;
}msg_t;

typedef struct socket_t
{
	int sockfd;
	int index;
	int ret;
	msg_t sock_tx_msg;
	msg_t sock_rx_msg;
	socket_state state;
}socket_t;

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define MAX_LENGTH_GMESSAGE	2048

/* CHANGE HERE AS YOUR ETHERNET SERVER */
#if IP_SERVER_STATIC_SETTING
#define SOC_SERVER_IP "192.168.1.17"
#define SOC_SERVER_PORT 2311
#endif
/* Private variables ---------------------------------------------------------*/
osThreadId sslTaskHandle;
osThreadId lwipTaskHandle;
/* Private function prototypes -----------------------------------------------*/
void StartSSLClientTask(void const * argument);
void handleClientTask(void const * argument);

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void const * argument)
{
  /* init code for LWIP */
	SEGGER_RTT_printf(0, "1\r\n");
  MX_LWIP_Init();
  SEGGER_RTT_printf(0, "2\r\n");
  extern struct netif gnetif;
  SEGGER_RTT_printf(0, "3\r\n");
  while(ip4_addr_isany_val(*netif_ip4_addr(&gnetif)))
  {
	  SEGGER_RTT_printf(0, "4\r\n");
  	osDelay(200);
  }
  /* definition and creation of lwipTask */
  SEGGER_RTT_printf(0, "5\r\n");
  osThreadDef(lwipTask, handleClientTask, osPriorityNormal, 0, 4096);
  lwipTaskHandle = osThreadCreate(osThread(lwipTask), NULL);
  /* USER CODE BEGIN StartDefaultTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartDefaultTask */
}

/* USER CODE BEGIN Header_handleClientTask */
/**
* @brief Function implementing the lwipTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_handleClientTask */
void handleClientTask(void const * argument)
{
	SEGGER_RTT_printf(0, "6\r\n");

  /* USER CODE BEGIN handleClientTask */


#if SOCKET_TEST
	struct sockaddr_in addr;
	struct socket_t gsocket;

	memset(&gsocket, 0, sizeof(gsocket));

	memset(&addr, 0, sizeof(addr));
	addr.sin_len = sizeof(addr);
	addr.sin_family = AF_INET;
	addr.sin_port = PP_HTONS(SOC_SERVER_PORT);
	addr.sin_addr.s_addr = inet_addr(SOC_SERVER_IP);
	/* calculate value for msg */
	int len_msg = strlen(data_10kb);
	int index = len_msg / MAX_LENGTH_GMESSAGE;

	gsocket.state = CREATE_SOCKET;
	int i = 0;

  /* Infinite loop */
	for(;;)
	{
	  switch(gsocket.state)
	  {
	  	  case CREATE_SOCKET: /*  create socket  */
	  		  memset(&gsocket, 0, sizeof(gsocket));
	  		  gsocket.sockfd = lwip_socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	  		  if (gsocket.sockfd == -1)
	  		  {
	  			  LWIP_DEBUGF(LWIP_DEBUG, ("Create socket fail\n"));
	  			  gsocket.state = CREATE_SOCKET;
	  		  }
	  		  else
	  		  {
	  			  LWIP_DEBUGF(LWIP_DEBUG, ("Create socket success\n"));
	  			  gsocket.state = CONNECT_SOCKET;
	  		  }
	  		  break;
	  	  case CONNECT_SOCKET:/*  connect socket  */
	  		  gsocket.ret = lwip_connect(gsocket.sockfd, (struct sockaddr*)&addr, sizeof(addr));
	  		  if (gsocket.ret != 0)
	  		  {
	  			  LWIP_DEBUGF(LWIP_DEBUG, ("Connect to socket server fail\n"));
	  			  gsocket.state = CREATE_SOCKET;
	  		  }
	  		  else
	  		  {
	  			  LWIP_DEBUGF(LWIP_DEBUG, ("Connect to socket server success\n"));
	  			  gsocket.state = SEND_MSG_SOCKET;
	  		  }
	  		  break;
	  	  case SEND_MSG_SOCKET:/*  send message  */
		      #if DATA_1KB
			  memcpy(gsocket.sock_tx_msg.msg, data_1kb, strlen(data_1kb) + 1);
	  		  gsocket.sock_tx_msg.len = strlen(data_1kb);
			  #endif
			  #if DATA_2KB
			  memcpy(gsocket.sock_tx_msg.msg, data_2kb, strlen(data_2kb) + 1);
	  		  gsocket.sock_tx_msg.len = strlen(data_2kb);
			  #endif
              #if DATA_10KB
	  		  while (i != index)
	  		  {
	  			  char * msg_buf = SubString(data_10kb, (i * MAX_LENGTH_GMESSAGE), ((i+1) * MAX_LENGTH_GMESSAGE - 1));
	  			  i++;
	  			  gsocket.ret = lwip_write(gsocket.sockfd, msg_buf, strlen(m));
	  			  if (gsocket.ret == -1)
	  			  {
	  				  SEGGER_RTT_printf(0, ("Send message %d to socket server fail\n"), i);
	  			  }
	  			  else
	  			  {
	  				  SEGGER_RTT_printf(0, ("Send message %d to socket server success\n"), i);
	  			  }
	  		  }
	  		  gsocket.state = RECEIVE_MSG_SOCKET;
	  		  break;
              #endif
	  			  gsocket.ret = lwip_write(gsocket.sockfd, gsocket.sock_tx_msg.msg, gsocket.sock_tx_msg.len);
	  			  if (gsocket.ret == -1)
	  			  {
	  				  LWIP_DEBUGF(LWIP_DEBUG, ("Send message to socket server fail\n"));
	  				  gsocket.state = CREATE_SOCKET;
	  			  }
	  			  else
	  			  {
	  				  LWIP_DEBUGF(LWIP_DEBUG, ("Send message to socket server success\n"));
			  #if TEST_CONTINUOUS_MSG
	  			  gsocket.state = SEND_MSG_SOCKET;
			  #else
	  				  gsocket.state = RECEIVE_MSG_SOCKET;
			  #endif
	  			  }
	  		  break;
	  	  case RECEIVE_MSG_SOCKET:/*  receive message  */
	  		  gsocket.sock_rx_msg.len =  MAX_LENGTH_GMESSAGE;
	  		  gsocket.ret = lwip_read(gsocket.sockfd, gsocket.sock_rx_msg.msg, gsocket.sock_rx_msg.len);
	  		  if (gsocket.ret == -1)
	  		  {
	  			  LWIP_DEBUGF(LWIP_DEBUG, ("Receive message from socket server fail\n"));
	  			  gsocket.state = RECEIVE_MSG_SOCKET;
	  		  }
	  		  else
	  		  {
	  			  SEGGER_RTT_printf(0, "MESSAGE FROM SERVER: %s\n", gsocket.sock_rx_msg.msg);
	  			  gsocket.state = HANDLE_MSG_SOCKET;
	  		  }
	  		  break;
	  	  case HANDLE_MSG_SOCKET:/*  handle msg form server socket  */
	  		  if (strcmp((char * )gsocket.sock_rx_msg.msg , "End client") == 0)
	  		  {
	  			  gsocket.state = CLOSE_SOCKET;
	  		  }
	  		  else gsocket.state = SEND_MSG_SOCKET;
	  		  break;
	  	  case CLOSE_SOCKET:/*  close socket  */
  			  gsocket.sockfd = lwip_close(gsocket.sockfd);
  			  gsocket.state = RECREATE_SOCKET;
  			  break;
	  	  case RECREATE_SOCKET:/*  recreate socket  */
	  		  if (HAL_GPIO_ReadPin(USER_BTN_GPIO_Port, USER_BTN_Pin) == GPIO_PIN_SET)
	  		  {
	  			  gsocket.state = CREATE_SOCKET;

	  		  }
	  		  else gsocket.state = RECREATE_SOCKET;
	  		  break;
	  }
	  osDelay(1);
	}
#endif
}
