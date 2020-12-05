#include "PID.h"

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_,double i_max) {
    this->Kp = Kp_;
    this->Ki = Ki_;
    this->Kd = Kd_;
    this->p_error = 0;
    this->i_error = 0;
    this->d_error = 0;
    this->i_max=i_max;
}

void PID::UpdateError(double cte) {
    d_error = p_error;
    UpdateIError(cte);
    p_error = cte;
    std::cout<<p_error<<","<<i_error<<","<<d_error<<std::endl;
}

double PID::TotalError() {
    double diff = p_error - d_error;
    double total_error = -Kp * p_error - Kd * diff - Ki * i_error;
    if (total_error > 1) { return 1; } else if (total_error < -1) { return -1; } else { return total_error; };
}

void PID::UpdateIError(double cte) {
    if(abs(i_error+cte)<i_max){
        i_error+=cte;
    }
}
