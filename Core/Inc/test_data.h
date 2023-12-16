#ifndef __DATA_TEST_SEND__
#define __DATA_TEST_SEND__

#define DATA_1KB 1
#define DATA_2KB 0
#define DATA_10KB 0

#define TEST_CONTINUOUS_MSG 0

#define data_1kb 	"Hello IMIC class from stm32 lwip\r\n"

#define data_2kb	"Start ipsum dolor sit amet, consectetur adipiscing elit.\
					Nullam fringilla, elit sed ultricies tristique, velit turpis volutpat tortor,\
					in fringilla arcu dolor ac ex. Vestibulum ante ipsum primis in faucibus orci\
					luctus et ultrices posuere cubilia Curae; Maecenas bibendum, neque id cursus rhoncus,\
					erat lectus vestibulum dolor, in tincidunt ligula risus sed ex.\
					Aenean consequat feugiat dui, at euismod nulla eleifend nec.\
					Sed sed massa id dolor malesuada fermentum.\
					Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
					In hac habitasse platea dictumst. Nam auctor finibus orci, eu auctor odio laoreet end\
					Start ipsum dolor sit amet, consectetur adipiscing elit.\
					Nullam fringilla, elit sed ultricies tristique, velit turpis volutpat tortor,\
					in fringilla arcu dolor ac ex. Vestibulum ante ipsum primis in faucibus orci\
					luctus et ultrices posuere cubilia Curae; Maecenas bibendum, neque id cursus rhoncus,\
					erat lectus vestibulum dolor, in tincidunt ligula risus sed ex.\
					Aenean consequat feugiat dui, at euismod nulla eleifend nec.\
					Sed sed massa id dolor malesuada fermentum.\
					Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
					In hac habitasse platea dictumst. Nam auctor finibus orci, eu auctor odio laoreetenda"

char * data_10kb = "Start 10kb ipsum dolor sit amet, consectetur adipiscing elit.\
					Nullam fringilla, elit sed ultricies tristique, velit turpis volutpat tortor,\
					in fringilla arcu dolor ac ex. Vestibulum ante ipsum primis in faucibus orci\
					luctus et ultrices posuere cubilia Curae; Maecenas bibendum, neque id cursus rhoncus,\
					erat lectus vestibulum dolor, in tincidunt ligula risus sed ex.\
					Aenean consequat feugiat dui, at euismod nulla eleifend nec.\
					Sed sed massa id dolor malesuada fermentum.\
					Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
					In hac habitasse platea dictumst. Nam auctor finibus orci, eu auctor odio laoreet end\
					Start ipsum dolor sit amet, consectetur adipiscing elit.\
					Nullam fringilla, elit sed ultricies tristique, velit turpis volutpat tortor,\
					in fringilla arcu dolor ac ex. Vestibulum ante ipsum primis in faucibus orci\
					luctus et ultrices posuere cubilia Curae; Maecenas bibendum, neque id cursus rhoncus,\
					erat lectus vestibulum dolor, in tincidunt ligula risus sed ex.\
					Aenean consequat feugiat dui, at euismod nulla eleifend nec.\
					Sed sed massa id dolor malesuada fermentum.\
					Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
						Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacini nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
					In hac habitasse platea dictumst. Nam auctor finibus orci, eu auctor odio laoreet end\
					Start ipsum dolor sit amet, consectetur adipiscing elit.\
					Nullam fringilla, elit sed ultricies tristique, velit turpis volutpat tortor,\
					in fringilla arcu dolor ac ex. Vestibulum ante ipsum primis in faucibus orci\
					luctus et ultrices posuere cubilia Curae; Maecenas bibendum, neque id cursus rhoncus,\
					erat lectus vestibulum dolor, in tincidunt ligula risus sed ex.\
					Aenean consequat feugiat dui, at euismod nulla eleifend nec.\
					Sed sed massa id dolor malesuada fermentum.\
					Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
						Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
					In hac habitasse platea dictumst. Nam auctor finibus orci, eu auctor odio laoreet end\
					Start ipsum dolor sit amet, consectetur adipiscing elit.\
					Nullam fringilla, elit sed ultricies tristique, velit turpis volutpat tortor,\
					in fringilla arcu dolor ac ex. Vestibulum ante ipsum primis in faucibus orci\
					luctus et ultrices posuere cubilia Curae; Maecenas bibendum, neque id cursus rhoncus,\
					erat lectus vestibulum dolor, in tincidunt ligula risus sed ex.\
					Aenean consequat feugiat dui, at euismod nulla eleifend nec.\
					Sed sed massa id dolor malesuada fermentum.\
					Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
						Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
					In hac habitasse platea dictumst. Nam auctor finibus orci, eu auctor odio laoreet end\
					Start ipsum dolor sit amet, consectetur adipiscing elit.\
					Nullam fringilla, elit sed ultricies tristique, velit turpis volutpat tortor,\
					in fringilla arcu dolor ac ex. Vestibulum ante ipsum primis in faucibus orci\
					luctus et ultrices posuere cubilia Curae; Maecenas bibendum, neque id cursus rhoncus,\
					erat lectus vestibulum dolor, in tincidunt ligula risus sed ex.\
					Aenean consequat feugiat dui, at euismod nulla eleifend nec.\
					Sed sed massa id dolor malesuada fermentum.\
					Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
						Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
					In hac habitasse platea dictumst. Nam auctor finibus orci, eu auctor odio laoreet end\
					Start ipsum dolor sit amet, consectetur adipiscing elit.\
					Nullam fringilla, elit sed ultricies tristique, velit turpis volutpat tortor,\
					in fringilla arcu dolor ac ex. Vestibulum ante ipsum primis in faucibus orci\
					luctus et ultrices posuere cubilia Curae; Maecenas bibendum, neque id cursus rhoncus,\
					erat lectus vestibulum dolor, in tincidunt ligula risus sed ex.\
					Aenean consequat feugiat dui, at euismod nulla eleifend nec.\
					Sed sed massa id dolor malesuada fermentum.\
					Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
						Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
					In hac habitasse platea dictumst. Nam auctor finibus orci, eu auctor odio laoreet end\
					Start ipsum dolor sit amet, consectetur adipiscing elit.\
					Nullam fringilla, elit sed ultricies tristique, velit turpis volutpat tortor,\
					in fringilla arcu dolor ac ex. Vestibulum ante ipsum primis in faucibus orci\
					luctus et ultrices posuere cubilia Curae; Maecenas bibendum, neque id cursus rhoncus,\
					erat lectus vestibulum dolor, in tincidunt ligula risus sed ex.\
					Aenean consequat feugiat dui, at euismod nulla eleifend nec.\
					Sed sed massa id dolor malesuada fermentum.\
					Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
						Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
					In hac habitasse platea dictumst. Nam auctor finibus orci, eu auctor odio laoreet end\
					Start ipsum dolor sit amet, consectetur adipiscing elit.\
					Nullam fringilla, elit sed ultricies tristique, velit turpis volutpat tortor,\
					in fringilla arcu dolor ac ex. Vestibulum ante ipsum primis in faucibus orci\
					luctus et ultrices posuere cubilia Curae; Maecenas bibendum, neque id cursus rhoncus,\
					erat lectus vestibulum dolor, in tincidunt ligula risus sed ex.\
					Aenean consequat feugiat dui, at euismod nulla eleifend nec.\
					Sed sed massa id dolor malesuada fermentum.\
					Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
						Vivamus consectetur, neque in lacinia fermentum, augue dolor posuere odio,\
					nec ullamcorper ligula odio ac ligula. Duis convallis enim eu dolor volutpat,\
					a fermentum purus cursus. Sed eu pulvinar ligula. Aliquam erat volutpat.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
					In hac habitasse platea dictumst. Nam auctor finibus orci, eu auctor odio laoreet end\
					Start ipsum dolor sit amet, consectetur adipiscing elit.\
					Nullam fringilla, elit sed ultricies tristique, velit turpis volutpat tortor,\
					in fringilla arcu dolor ac ex. Vestibulum ante ipsum primis in faucibus orci\
					luctus et ultrices posuere cubilia Curae; Maecenas bibendum, neque id cursus rhoncus,\
					erat lectus vestibulum dolor,jdj ex.\
					Suspendisse potenti. Nunc lacinia nunc nec libero rhoncus, sit amet dictum dolor facilisis.\
					In hac habitasse platea dictumst. Nam auctor finibus orci, eu auctor odio laoreet end10k";
#endif
