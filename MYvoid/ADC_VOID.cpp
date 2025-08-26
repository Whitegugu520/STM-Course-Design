#include "ADC_VOID.h"

#define ADC_resistor 1      //被测的电阻大小

void ADC_Init()
{
    ADC_ResetCalibration(ADC1);
}
