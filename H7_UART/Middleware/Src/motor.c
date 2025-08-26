#include "motor.h"

#define MOTOR1_PWM htim3
#define MOTOR1_PWM_CHANNEL TIM_CHANNEL_1

void Motor_Init(void) //启动电机
{
    HAL_TIM_PWM_Start(&MOTOR1_PWM, MOTOR1_PWM_CHANNEL);
}
void Motor_SetSpeed(int speed) //设置电机速度
{
    if (speed < 0) {
        speed = 0; // 限制最小速度为0
    } else if (speed > 100) {
        speed = 100; // 限制最大速度为100
    }    
    __HAL_TIM_SET_COMPARE(&MOTOR1_PWM, MOTOR1_PWM_CHANNEL, speed);
}