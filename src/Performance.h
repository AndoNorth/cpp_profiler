#ifndef PERFORMANCE_H
#define PERFORMANCE_H

#include "LinkedList.h"
#include <vector>

struct PerformanceData
{
    double timeElapsed;
    int listSize;
}

class Performance
{
private:
    LinkedList list;
    std::vector<double> add_node_times;
    std::vector<double> find_node_times;

public:
    Performance(int size);
    void measure_add_node_performance();
    void measure_find_node_performance();
    void print_results();
    PerformanceData measure(Timer &timer, LinkedList &list);
};

#endif
