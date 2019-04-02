ifneq ($(KERNELRELEASE),)
	obj-m := keylogger.o

else

KERNEL_SOURCE:=/usr/src/linux-headers-4.15.0-46-generic
PWD:=$(shell pwd)

all:
	$(MAKE) -C $(KERNEL_SOURCE) SUBDIRS=$(PWD) modules
clean:
	$(MAKE) -C $(KERNEL_SOURCE) SUBDIRS=$(PWD) clean

endif	