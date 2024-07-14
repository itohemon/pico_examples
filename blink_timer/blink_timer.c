#include <stdio.h>
#include <math.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#define LED_PIN 25

volatile bool led_on;

static void repeating_timer_callback(void) {
  led_on = !led_on;

  gpio_put(LED_PIN, led_on);
}

int main() {
  gpio_init(LED_PIN);

  gpio_set_dir(LED_PIN, GPIO_OUT);

  led_on = false;

  struct repeating_timer timer;
  add_repeating_timer_ms(-500, repeating_timer_callback, NULL, &timer);

  while (true) {
  }
}
