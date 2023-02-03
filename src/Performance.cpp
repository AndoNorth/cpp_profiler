#include "Performance.h"
#include "LinkedList.h"
#include "Timer.h"
#include <iostream>
#include <vector>

Performance::Performance(int size)
{
    list = LinkedList(size);
}

void Performance::measure_add_node_performance()
{
    Timer timer;
    timer.start();
    list.add_node();
    auto elapsed = timer.elapsed_ms();
    add_node_times.push_back(elapsed);
}

void Performance::measure_find_node_performance()
{
    Timer timer;
    timer.start();
    list.find_node(0);
    auto elapsed = timer.elapsed_ms();
    find_node_times.push_back(elapsed);
}

PerformanceData Performance::measure(Timer &timer, LinkedList &list)
{
    PerformanceData performanceData;
    performanceData.timeElapsed = timer.getElapsedTime().count();
    performanceData.listSize = 0;

    LinkedList::Node *node = list.head;
    while (node != nullptr)
    {
        performanceData.listSize++;
        node = node->next;
    }

    return performanceData;
}

void Performance::print_results()
{
    double total_add_node_time = 0;
    double total_find_node_time = 0;
    for (auto time : add_node_times)
    {
        total_add_node_time += time;
    }
    for (auto time : find_node_times)
    {
        total_find_node_time += time;
    }
    std::cout << "Average add node time: " << total_add_node_time / add_node_times.size() << "ms" << std::endl;
    std::cout << "Average find node time: " << total_find_node_time / find_node_times.size() << "ms" << std::endl;
}
