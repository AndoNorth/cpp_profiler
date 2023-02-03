#include "Reporting.h"
#include <iostream>

void Reporting::showReport(const std::vector<double> &timings)
{
    std::cout << "Performance Report:" << std::endl;
    for (int i = 0; i < timings.size(); i++)
    {
        std::cout << "Test " << i + 1 << ": " << timings[i] << "ms" << std::endl;
    }
}
