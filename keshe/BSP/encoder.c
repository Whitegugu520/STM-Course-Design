#include "encoder.h"

uint16_t encoder_value()
{
    uint16_t value = 0;
    if(__HAL_TIM_GET_COUNTER(&htim4) > 1000)
    {
        __HAL_TIM_SET_COUNTER(&htim4, 0); // Reset the counter if it is negative
    }
    else if(__HAL_TIM_GET_COUNTER(&htim4) > 20)
    {
        __HAL_TIM_SET_COUNTER(&htim4, 20); // Reset the counter if it is negative
    }
    value = __HAL_TIM_GET_COUNTER(&htim4);
    return value;
}
