#ifndef TIMER_H
#define TIMER_H

#include <chrono>

class Timer
{
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time;
    std::chrono::time_point<std::chrono::high_resolution_clock> end_time;

public:
    Timer();
    void start();
    void stop();
    double elapsed_ms();
};

#endif
