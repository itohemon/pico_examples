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

extern void drv_led_r(int);
extern void drv_led_fr(int);
extern void drv_led_fl(int);
extern void drv_led_l(int);

extern void drv_led_r_init(void);
extern void drv_led_fr_init(void);
extern void drv_led_fl_init(void);
extern void drv_led_l_init(void);
