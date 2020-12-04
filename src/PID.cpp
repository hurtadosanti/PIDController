#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
    this->Kp = Kp_;
    this->Ki = Ki_;
    this->Kd = Kd_;
    this->p_error = 0;
    this->i_error = 0;
    this->d_error = 0;
}

void PID::UpdateError(double cte) {
    d_error = p_error;
    i_error += cte;
    p_error = cte;
}

double PID::TotalError() {
    double diff = p_error - d_error;
    double total_error = -Kp * p_error - Kd * diff - Ki * i_error;
    if (total_error > 1) { return 1; } else if (total_error < -1) { return -1; } else { return total_error; };
}