#include "ADC_void.h"






void ADC_Start(ADC_HandleTypeDef *ADC_Channel)
{
    HAL_ADC_Start(ADC_Channel);
}

void ADC_getvalue(ADC_HandleTypeDef *ADC_Channel, uint32_t *value)
{
    if(HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY) == HAL_OK)
    {
        *value = HAL_ADC_GetValue(ADC_Channel);
    }

}