#include <iostream>
#include "LinkedList.h"
#include "Timer.h"
#include "Performance.h"
#include "Reporting.h"

int main()
{
    LinkedList list;
    Timer timer;
    Performance performance;
    Reporting reporting;

    // initialize the linked list
    list.initialize();

    // start the timer
    timer.start();

    // perform some operations on the linked list
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);

    // stop the timer
    timer.stop();

    // measure the performance
    PerformanceData performanceData = performance.measure(timer, list);

    // display the results
    reporting.displayResults(performanceData);

    return 0;
}
