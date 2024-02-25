#include <stdio.h>
#include "pico/stdlib.h"

#include "bsp/board.h"


#define LED_GPIO 15

// Initialize on-board peripherals : led, button, uart and USB
void board_init(void){
	gpio_init(LED_GPIO);
	gpio_set_dir(LED_GPIO, GPIO_OUT);
	gpio_put(LED_GPIO, false);

	 stdio_init_all();
	 sleep_ms(2000);

}

// Turn LED on or off
void board_led_write(bool state){
	gpio_put(LED_GPIO, state);
}


int board_getchar(void) {
	return getchar_timeout_us	(	0	);

}
