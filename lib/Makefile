SRC=$(wildcard *.c)
OBJ=$(patsubst %.c,%.o,$(SRC))

TARGET=libipcs.a

all:$(OBJ)
	-ar rcs $(TARGET) $(OBJ) 
	echo "make lib done!"

$(OBJ):$(SRC)
	gcc -c $< -o $@

install:
	-cp -f $(TARGET) /usr/local/lib/
	-cp -f ./pkgconfig/libipcs.pc /usr/local/lib/pkgconfig/libipcs.pc

uninstall:
	-rm -rf /usr/local/lib/$(TARGET)
	-rm -rf /usr/local/lib/pkgconfig/libipcs.pc

clean:
	@-rm -rf $(OBJ) $(TARGET)

.PHONE:clean all install uninstall

