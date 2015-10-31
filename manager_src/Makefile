SRC=$(wildcard *.c)
OBJ=$(patsubst %.c,%.o,$(SRC))

CFLAGS=$(shell pkg-config --libs libipcs)

PROJECT=xmanager

all:$(PROJECT)
	echo "make xmanager completed!"

$(OBJ):$(SRC)
	echo $(CFLAGS)
	gcc -c $< -o $@ $(CFLAGS)

$(PROJECT):$(OBJ)
	gcc $(OBJ) -o $(PROJECT) $(CFLAGS)


install:
	@cp $(PROJECT) ..

clean:
	@-rm -rf $(OBJ) $(PROJECT)
	@-rm -rf ../$(PROJECT)


.PHONE:clean all install

