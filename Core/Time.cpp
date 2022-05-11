#include "Time.hpp"


void Timer::start()
{
    start_ = std::chrono::steady_clock::now();
}

void Timer::stop()
{
    end_ = std::chrono::steady_clock::now();
}

void Timer::reset()
{
    start_ = end_;
}

double Timer::getTime()
{

    double tmp = std::chrono::duration <double, std::milli>(end_ - start_).count();
    return tmp;
}
