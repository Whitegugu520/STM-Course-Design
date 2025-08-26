#include "encoder.h"

#define ENCODER1_TIM htim3
#define ENCODER1_TIM_CHANNEL TIM_CHANNEL_ALL
#define ENCODER1_RES 13
#define ENCODER1_TIM 20  //默认单位ms

int Encoder1_value = 0;
int Encoder1_value_last = 0;
void Encoder_Init(void) //启动编码器
{
    HAL_TIM_Encoder_Start(&ENCODER1_TIM, ENCODER1_TIM_CHANNEL);
}
void Encoder1_Update()   //更新编码器
{
    Encoder1_value_last = Encoder1_value; // 保存上次的编码器值
    Encoder1_value = __HAL_TIM_GET_COUNTER(&ENCODER1_TIM);
}
int Encoder1_Position()
{
    return Encoder1_value;
}
int Encoder1_Speed()
{
    int speed;
    speed = (Encoder1_value - Encoder1_value_last) * ENCODER1_RES / ENCODER1_TIM; //计算速度
    return speed;
}