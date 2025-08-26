#ifndef ENCODER_H
#define ENCODER_H

#include "main.h"
#icnlude "tim.h"

extern int Encoder1_value; //编码器值

void Encoder_Init(void); //启动编码器
void Encoder_Update(void); //更新编码器



#endif
