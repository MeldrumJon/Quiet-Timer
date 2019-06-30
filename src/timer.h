#include <stdint.h>

#define TIMER_PRESCALER 1024
#define TIMER_OC 250
#define TIMER_TICKS(seconds) ((seconds*F_CPU)/TIMER_PRESCALER/TIMER_OC)

void timer_enable(void);
void timer_disable(void);

extern volatile uint_fast8_t timer_intrpt_flag;