#include "Reporting.h"
#include <iostream>
#include <fstream>

void Reporting::printResults(const std::vector<double> &timings)
{
    std::cout << "Performance Report:" << std::endl;
    for (int i = 0; i < timings.size(); i++)
    {
        std::cout << "Test " << i + 1 << ": " << timings[i] << "ms" << std::endl;
    }
}

void Reporting::saveResults(const std::vector<double> &timings, const std::string &filePath)
{
    std::ofstream outputFile(filePath);
    if (outputFile.is_open())
    {
        for (int i = 0; i < timings.size(); i++)
        {
            outputFile << timings[i] << std::endl;
        }
        outputFile.close();
    }
    else
    {
        std::cerr << "Unable to open file " << filePath << " for writing" << std::endl;
    }
}
