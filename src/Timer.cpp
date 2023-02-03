#include "Timer.h"
#include <chrono>

Timer::Timer()
{
    start_time = std::chrono::high_resolution_clock::now();
}

void Timer::start()
{
    start_time = std::chrono::high_resolution_clock::now();
}

void Timer::stop()
{
    end_time = std::chrono::high_resolution_clock::now();
}

double Timer::elapsed_ms()
{
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
    return duration.count();
}