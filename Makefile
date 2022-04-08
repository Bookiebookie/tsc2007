install:
	mkdir -p /lib/modules/$(shell uname -r)/kernel/drivers/input/touchscreen
	cp tsc2007.ko /lib/modules/$(shell uname -r)/kernel/drivers/input/touchscreen/tsc2007.ko
	grep -q "i2c-dev" /etc/modules || echo "i2c-dev" | tee -a /etc/modules
	grep -q "tsc2007.ko" /etc/modules || echo "tsc2007.ko" | tee -a /etc/modules
	depmod -a

