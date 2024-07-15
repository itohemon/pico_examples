#include "pico/stdlib.h"
#include "driver.h"

void drv_led_r(int status) {
  gpio_put(LED_PIN4, status);
}

void drv_led_fr(int status) {
  gpio_put(LED_PIN3, status);
}

void drv_led_fl(int status) {
  gpio_put(LED_PIN2, status);
}

void drv_led_l(int status) {
  gpio_put(LED_PIN1, status);
}

void drv_led_r_init(void) {
  gpio_init(LED_PIN4);
  gpio_set_dir(LED_PIN4, GPIO_OUT);
}

void drv_led_fr_init(void) {
  gpio_init(LED_PIN3);
  gpio_set_dir(LED_PIN3, GPIO_OUT);
}

void drv_led_fl_init(void) {
  gpio_init(LED_PIN2);
  gpio_set_dir(LED_PIN2, GPIO_OUT);
}

void drv_led_l_init(void) {
  gpio_init(LED_PIN1);
  gpio_set_dir(LED_PIN1, GPIO_OUT);
}

