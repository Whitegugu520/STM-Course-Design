#ifndef ADC_VOID_H
#define ADC_VOID_H



#include "adc.h"  

#ifdef __cplusplus
extern "C" {
#endif

void ADC_Start(ADC_HandleTypeDef *ADC_Channel);
void ADC_getvalue(ADC_HandleTypeDef *ADC_Channel, uint32_t *value);


#ifdef __cplusplus
}
#endif

#endif
