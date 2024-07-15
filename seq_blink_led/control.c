#include "common.h"
#include "control.h"

void ctrl_led_r(int status) {
  drv_led_r(status);
}

void ctrl_led_fr(int status) {
  drv_led_fr(status);
}

void ctrl_led_fl(int status) {
  drv_led_fl(status);
}

void ctrl_led_l(int status) {
  drv_led_l(status);
}

void ctrl_led_on(void) {
  ctrl_led_r(LED_ON);
  ctrl_led_fr(LED_ON);
  ctrl_led_fl(LED_ON);
  ctrl_led_l(LED_ON);
}

void ctrl_led_off(void) {
  ctrl_led_r(LED_OFF);
  ctrl_led_fr(LED_OFF);
  ctrl_led_fl(LED_OFF);
  ctrl_led_l(LED_OFF);
}

void ctrl_led_r_init() {
  drv_led_r_init();
}

void ctrl_led_fr_init() {
  drv_led_fr_init();
}

void ctrl_led_fl_init() {
  drv_led_fl_init();
}

void ctrl_led_l_init() {
  drv_led_l_init();
}

void ctrl_led_init(void) {
  ctrl_led_r_init();
  ctrl_led_fr_init();
  ctrl_led_fl_init();
  ctrl_led_l_init();
}
