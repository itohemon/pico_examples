#include <stdio.h>
#include <math.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#include "common.h"
#include "control.h"

int main() {
  ctrl_led_init();

  ctrl_led_on();
  sleep_ms(200);
  ctrl_led_off();

  while (true) {
    ctrl_led_r(LED_ON);
    ctrl_led_fr(LED_OFF);
    ctrl_led_fl(LED_OFF);
    ctrl_led_l(LED_OFF);
    sleep_ms(200);

    ctrl_led_r(LED_OFF);
    ctrl_led_fr(LED_ON);
    ctrl_led_fl(LED_OFF);
    ctrl_led_l(LED_OFF);
    sleep_ms(200);

    ctrl_led_r(LED_OFF);
    ctrl_led_fr(LED_OFF);
    ctrl_led_fl(LED_ON);
    ctrl_led_l(LED_OFF);
    sleep_ms(200);

    ctrl_led_r(LED_OFF);
    ctrl_led_fr(LED_OFF);
    ctrl_led_fl(LED_OFF);
    ctrl_led_l(LED_ON);
    sleep_ms(200);
  }
}

