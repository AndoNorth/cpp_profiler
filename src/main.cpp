#include "LinkedList.h"
#include "Timer.h"
#include "Reporting.h"

#include <iostream>

int main()
{
    LinkedList list;
    Timer timer;
    Reporting reporting;

    // initialize the linked list
    list.initialize();

    // timings
    std::vector<double> timings;

    // start the timer
    timer.start();

    // perform some operations on the linked list
    list.append(1);
    list.prepend(2);
    list.insert(3, 2);

    // stop the timer
    timer.stop();

    // add time to timings list
    timings.push_back(timer.elapsed_ms());

    // display the results
    reporting.printResults(timings);

    // save to text file
    std::string filepath = "./reports/performance.txt";
    reporting.saveResults(timings, filepath);

    return 0;
}
