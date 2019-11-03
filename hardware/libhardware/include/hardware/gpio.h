#ifndef ANDROID_GPIO_INTERFACE_H
#define ANDROID_GPIO_INTERFACE_H
#include <hardware/hardware.h>

__BEGIN_DECLS

#define GPIO_HARDWARE_MODULE_ID "gpio"

#define GPIO_INPUT_DIRECTION false
#define GPIO_OUTPUT_DIRECTION true
#define GPIO_HIGH_VALUE 1
#define GPIO_LOW_VALUE 0

	int fd;
	int (*set_val)(struct gpio_device_t* dev, int val);
	int (*get_val)(struct gpio_device_t* dev, int* val);
    int (*set_dir)(struct gpio_device_t* dev, bool direction);
};

__END_DECLS

#endif