#include "capture.h"


float distance= 0;
void Distance_Init()
{
	HAL_TIM_Base_Start(&htim1);
	HAL_TIM_IC_Start(&htim1, TIM_CHANNEL_1);
	HAL_TIM_IC_Start_IT(&htim1, TIM_CHANNEL_2);

}
void Distance_Get()
{
	uint32_t a = 0;
	uint32_t b = 0;
	 distance = 0;
	a= HAL_TIM_ReadCapturedValue(&htim1, TIM_CHANNEL_1); // Read the captured value from channel 1
	b= HAL_TIM_ReadCapturedValue(&htim1, TIM_CHANNEL_2); // Read the captured value from channel 2
	distance = (b - a) * 0.034 / 2; // Calculate the distance in cm
}
void Distance_Start()
{
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET);
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET);
	__HAL_TIM_SET_COUNTER(&htim1, 0);
}