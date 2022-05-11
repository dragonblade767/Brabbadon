#pragma once
#include <iostream>
#include <chrono>
namespace Brabbadon::Core::Time
{
    class Timer
    {
        std::chrono::_V2::steady_clock::time_point start_;
        std::chrono::_V2::steady_clock::time_point end_;
    public:
        void start();
        void stop();
        void reset();
        double getTime();
    };
}
using namespace Brabbadon::Core::Time;
