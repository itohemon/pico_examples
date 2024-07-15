#include <stdio.h>
#include <math.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#include "common.h"
#include "control.h"

volatile uint btn_inc_pinnum;
volatile uint btn_clr_pinnum;
volatile uint btn_dec_pinnum;
volatile int mode;
volatile bool btnInc;
volatile bool btnClr;
volatile bool btnDec;
volatile uint32_t lastTime1;
volatile uint32_t lastTime2;
volatile uint32_t lastTime3;

static void btn_callback(uint gpio, uint32_t events) {
  if (gpio == btn_inc_pinnum) {
    btnInc = true;
    lastTime1 = get_absolute_time();
  }
  if (gpio == btn_clr_pinnum) {
    btnClr = true;
    lastTime2 = get_absolute_time();
  }
  if (gpio == btn_dec_pinnum) {
    btnDec = true;
    lastTime3 = get_absolute_time();
  }
}

void app_dispMode(int mode) {
  ctrl_led_num(mode);
}

int main() {
  gpio_init(25);
  gpio_set_dir(25, GPIO_OUT);

  btn_inc_pinnum = ctrl_btn_inc_pinnum();
  btn_clr_pinnum = ctrl_btn_clr_pinnum();
  btn_dec_pinnum = ctrl_btn_dec_pinnum();

  ctrl_btn_init();
  ctrl_led_init();

  ctrl_led_on();
  sleep_ms(200);
  ctrl_led_off();

  mode = 0;
  btnInc = false;
  btnClr = false;
  btnDec = false;
  lastTime1 = get_absolute_time();
  lastTime2 = get_absolute_time();
  lastTime3 = get_absolute_time();

  gpio_set_irq_enabled_with_callback(btn_inc_pinnum, 0x4u, true, btn_callback);
  gpio_set_irq_enabled_with_callback(btn_clr_pinnum, 0x4u, true, btn_callback);
  gpio_set_irq_enabled_with_callback(btn_dec_pinnum, 0x4u, true, btn_callback);

  while (true) {
    uint32_t currTime = get_absolute_time();

    if ((btnInc == true) && (absolute_time_diff_us(lastTime1, currTime) > 10000)) {
      if (ctrl_btn_inc() == BTN_ON) {
        mode++;
        mode = mode % 16;
        btnInc = false;
      }
    }

    if ((btnClr == true) && (absolute_time_diff_us(lastTime2, currTime) > 10000)) {
      if (ctrl_btn_clr() == BTN_ON) {
        mode = 0;
        btnClr = false;
      }
    } 

    if ((btnDec == true) && (absolute_time_diff_us(lastTime3, currTime) > 10000)) {
      if (ctrl_btn_dec() == BTN_ON) {
        mode--;
        if (mode <= -1) {
          mode = 15;
        }
        btnDec = false;
      }
    }

    app_dispMode(mode);
  }
}

