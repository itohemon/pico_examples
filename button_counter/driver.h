#define LED_PIN1 18
#define LED_PIN2 19
#define LED_PIN3 17
#define LED_PIN4 16

#define BTN_INC 24
#define BTN_CLR 23
#define BTN_DEC 22

void drv_led_r(int status);
void drv_led_fr(int status);
void drv_led_fl(int status);
void drv_led_l(int status);

void drv_led_r_init(void);
void drv_led_fr_init(void);
void drv_led_fl_init(void);
void drv_led_l_init(void);

uint drv_btn_inc_pinnum(void);
uint drv_btn_clr_pinnum(void);
uint drv_btn_dec_pinnum(void);

bool drv_btn_inc(void);
bool drv_btn_clr(void);
bool drv_btn_dec(void);

void drv_btn_inc_init(void);
void drv_btn_clr_init(void);
void drv_btn_dec_init(void);
