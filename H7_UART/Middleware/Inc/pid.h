#ifndef PID_H
#define PID_H

#include "encoder.h"
#include "motor.h"
#include "main.h"



typedef struct {
    float kp;
    float ki;
    float kd;

    float target;
    float actual;
    float out;

    float Error0;
	float Error1;
	float ErrorInt;

    float outMax;
	float outMin;
}pid_set;

pid_set pid1;

void pid_update(pid_set* p);

#endif
