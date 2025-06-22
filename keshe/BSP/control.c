#include "control.h"


void PWM_SET(void)
{
    uint16_t pwm_value = 0;
    pwm_value = encoder_value();
    pwm_value = pwm_value*10+50; 
    __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, pwm_value);
}