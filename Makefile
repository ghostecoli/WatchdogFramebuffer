# the method doesn't work as i think!so i will drop it!
#DIRS := $(shell find . -name '*' -type d)

all:$(DEPS)
	@#$(foreach dir,$(DIRS),make -C $(dir))
	@# I don't think that is a good idea,do you have a better idea?tell me please!contact with me by qq948282063
	@#automake or cmake?
	@-make -C lib
	@-make -C lib install
	@-make -C server_src
	@-make -C manager_src

install:
	#@-make -C lib install
	@-make -C server_src install
	@-make -C manager_src install

uninstall:
	@-make -C lib uninstall

clean:
	#$(foreach dir,$(DIRS),make -C $(dir) clean)
	@-make -C lib clean
	@-make -C server_src clean
	@-make -C manager_src clean

.PHONE:all clean install uninstall

	


