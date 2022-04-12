obj-m += tsc2007.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

install:
	mkdir -p /lib/modules/$(shell uname -r)/kernel/drivers/input/touchscreen
	cp tsc2007.ko /lib/modules/$(shell uname -r)/kernel/drivers/input/touchscreen/tsc2007.ko
	sed -i '/blacklist i2c-bcm2708/s/^b/#b/' /etc/modprobe.d/raspi-blacklist.conf
	grep -q "i2c-dev" /etc/modules || echo "i2c-dev" | tee -a /etc/modules
	grep -q "tsc2007" /etc/modules || echo "tsc2007" | tee -a /etc/modules
	depmod -a