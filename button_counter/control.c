#include <stdio.h>
#include "pico/stdlib.h"

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

void ctrl_led_num(int num) {
  if (num == 0) {
    drv_led_r(LED_OFF);
    drv_led_fr(LED_OFF);
    drv_led_fl(LED_OFF);
    drv_led_l(LED_OFF);
  }
  else if (num == 1) {
    drv_led_r(LED_ON);
    drv_led_fr(LED_OFF);
    drv_led_fl(LED_OFF);
    drv_led_l(LED_OFF);
  }
  else if (num == 2) {
    drv_led_r(LED_OFF);
    drv_led_fr(LED_ON);
    drv_led_fl(LED_OFF);
    drv_led_l(LED_OFF);
  }
  else if (num == 3) {
    drv_led_r(LED_ON);
    drv_led_fr(LED_ON);
    drv_led_fl(LED_OFF);
    drv_led_l(LED_OFF);
  }
  else if (num == 4) {
    drv_led_r(LED_OFF);
    drv_led_fr(LED_OFF);
    drv_led_fl(LED_ON);
    drv_led_l(LED_OFF);
  }
  else if (num == 5) {
    drv_led_r(LED_ON);
    drv_led_fr(LED_OFF);
    drv_led_fl(LED_ON);
    drv_led_l(LED_OFF);
  }
  else if (num == 6) {
    drv_led_r(LED_OFF);
    drv_led_fr(LED_ON);
    drv_led_fl(LED_ON);
    drv_led_l(LED_OFF);
  }
  else if (num == 7) {
    drv_led_r(LED_ON);
    drv_led_fr(LED_ON);
    drv_led_fl(LED_ON);
    drv_led_l(LED_OFF);
  }
  else if (num == 8) {
    drv_led_r(LED_OFF);
    drv_led_fr(LED_OFF);
    drv_led_fl(LED_OFF);
    drv_led_l(LED_ON);
  }
  else if (num == 9) {
    drv_led_r(LED_ON);
    drv_led_fr(LED_OFF);
    drv_led_fl(LED_OFF);
    drv_led_l(LED_ON);
  }
  else if (num == 10) {
    drv_led_r(LED_OFF);
    drv_led_fr(LED_ON);
    drv_led_fl(LED_OFF);
    drv_led_l(LED_ON);
  }
  else if (num == 11) {
    drv_led_r(LED_ON);
    drv_led_fr(LED_ON);
    drv_led_fl(LED_OFF);
    drv_led_l(LED_ON);
  }
  else if (num == 12) {
    drv_led_r(LED_OFF);
    drv_led_fr(LED_OFF);
    drv_led_fl(LED_ON);
    drv_led_l(LED_ON);
  }
  else if (num == 13) {
    drv_led_r(LED_ON);
    drv_led_fr(LED_OFF);
    drv_led_fl(LED_ON);
    drv_led_l(LED_ON);
  }
  else if (num == 14) {
    drv_led_r(LED_OFF);
    drv_led_fr(LED_ON);
    drv_led_fl(LED_ON);
    drv_led_l(LED_ON);
  }
  else if (num == 15) {
    drv_led_r(LED_ON);
    drv_led_fr(LED_ON);
    drv_led_fl(LED_ON);
    drv_led_l(LED_ON);
  }
}

uint ctrl_btn_inc_pinnum(void) {
  return drv_btn_inc_pinnum();
}

uint ctrl_btn_clr_pinnum(void) {
  return drv_btn_clr_pinnum();
}

uint ctrl_btn_dec_pinnum(void) {
  return drv_btn_dec_pinnum();
}

bool ctrl_btn_inc(void) {
  return drv_btn_inc();
}

bool ctrl_btn_clr(void) {
  return drv_btn_clr();
}

bool ctrl_btn_dec(void) {
  return drv_btn_dec();
}

void ctrl_btn_init(void) {
  drv_btn_inc_init();
  drv_btn_clr_init();
  drv_btn_dec_init();
}

