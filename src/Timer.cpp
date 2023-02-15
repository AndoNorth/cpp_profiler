#include "Timer.h"

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
    return std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
}