#ifndef MOTOR_H
#define MOTOR_H

#icnlude "main.h"
#include "tim.h"


void Motor_Init(void); //启动电机
void Motor_SetSpeed(int speed); //设置电机速度

#endif
