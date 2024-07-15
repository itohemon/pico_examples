#define LED_PIN1 12
#define LED_PIN2 13
#define LED_PIN3 14
#define LED_PIN4 15

void drv_led_r(int status);
void drv_led_fr(int status);
void drv_led_fl(int status);
void drv_led_l(int status);

void drv_led_r_init(void);
void drv_led_fr_init(void);
void drv_led_fl_init(void);
void drv_led_l_init(void);
