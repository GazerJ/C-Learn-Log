#指定文件所在路径
VPATH:=  include/ui include/db include/net lib/ui lib/db lib/net app/server
#指定文件库文件路径
path:= -I ./include

CC=gcc
CPP=c++
#SRCS=$(wildcard *.c)
#需要编译的.c文件
SRCS=server.c ui.c net.c db.c
#需要链接的.o文件
OBJS=$(SRCS:.c=.o)
#分析的依赖项.d文件
DEPS=$(SRCS:.c=.d)

#获取所有的待链接.o文件
main: $(OBJS)
	@#
%.o : %.c  #编译生成.o文件
	gcc $(path)  -c  $< -o $@
#获取依赖项文件，并导入
-include $(DEPS)
%.d : %.c  #预处理 并分析依赖关系.d文件
	gcc $(path)   $^ -E  -MD >log

#链接
.PHONY:install
install: *.o#链接文件
	gcc  -o  main $^
#清除
.PHONY:clean
clean: 
	rm *.o main  *.d 
