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

uint drv_btn_inc_pinnum(void) {
  return BTN_INC;
}

uint drv_btn_clr_pinnum(void) {
  return BTN_CLR;
}

uint drv_btn_dec_pinnum(void) {
  return BTN_DEC;
}

bool drv_btn_inc(void) {
  return gpio_get(BTN_INC);
}

bool drv_btn_clr(void) {
  return gpio_get(BTN_CLR);
}

bool drv_btn_dec(void) {
  return gpio_get(BTN_DEC);
}

void drv_btn_inc_init(void) {
  gpio_init(BTN_INC);
  gpio_set_dir(BTN_INC, GPIO_IN);
  gpio_pull_up(BTN_INC);
}

void drv_btn_clr_init(void) {
  gpio_init(BTN_CLR);
  gpio_set_dir(BTN_CLR, GPIO_IN);
  gpio_pull_up(BTN_CLR);
}

void drv_btn_dec_init(void) {
  gpio_init(BTN_DEC);
  gpio_set_dir(BTN_DEC, GPIO_IN);
  gpio_pull_up(BTN_DEC);
}

