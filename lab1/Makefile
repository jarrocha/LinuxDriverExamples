obj-m += helloworld.o

SUBDIRS = /lib/modules/$(shell uname -r)/build
ARM_ARCH=arm
ARM_CC=arm-linux-gnueabihf-

arm:
	make -C $(SUBDIRS) ARCH=arm CROSS_COMPILE=$(ARM_CC) M=$(PWD) modules;
all:
	make -C $(SUBDIRS) $(CFLAGS) M=$(PWD) modules;
clean:
	make -C $(SUBDIRS) $(CFLAGS) M=$(PWD) clean;