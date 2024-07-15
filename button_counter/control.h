void ctrl_led_r(int status);
void ctrl_led_fr(int status);
void ctrl_led_fl(int status);
void ctrl_led_l(int status);
void ctrl_led_on(void);
void ctrl_led_off(void);

void ctrl_led_r_init(void);
void ctrl_led_fr_init(void);
void ctrl_led_fl_init(void);
void ctrl_led_l_init(void);
void ctrl_led_init(void);

void ctrl_led_num(int num);

uint ctrl_btn_inc_pinnum(void);
uint ctrl_btn_clr_pinnum(void);
uint ctrl_btn_dec_pinnum(void);
bool ctrl_btn_inc(void);
bool ctrl_btn_clr(void);
bool ctrl_btn_dec(void);
void ctrl_btn_init(void);

extern void drv_led_r(int);
extern void drv_led_fr(int);
extern void drv_led_fl(int);
extern void drv_led_l(int);
extern void drv_led_r_init(void);
extern void drv_led_fr_init(void);
extern void drv_led_fl_init(void);
extern void drv_led_l_init(void);

extern uint drv_btn_inc_pinnum(void);
extern uint drv_btn_clr_pinnum(void);
extern uint drv_btn_dec_pinnum(void);
extern bool drv_btn_inc(void);
extern bool drv_btn_clr(void);
extern bool drv_btn_dec(void);
extern void drv_btn_inc_init(void);
extern void drv_btn_clr_init(void);
extern void drv_btn_dec_init(void);
