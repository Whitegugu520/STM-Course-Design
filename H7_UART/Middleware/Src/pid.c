#include "pid.h"


float kp = 1.0 , ki = 0.1, kd = 0.01; // PID参数

int target = 0;
int error = 0;
int actual = 0;
int out = 0;

void pid_set()
{
    int last_actual = actual; // 保存上次的实际值
    int pid_p,pid_i = 0,pid_d;


    actual = Encoder1_Position();
    error = target - actual; // 计算误差


    pid_p = error;  // 计算比例项

    pid_i += error;
    if(pid_i > 100 || pid_i < -100) { // 限制积分项
        pid_i = (pid_i > 0) ? 100 : -100;
    }

    pid_d = actual - last_actual; // 计算微分项
    
    out = kp * pid_d + ki * pid_i + kd * pid_d); // PID公式
}
