#ifndef REPORTING_H
#define REPORTING_H

#include <vector>
#include <string>

class Reporting
{
public:
    static void showReport(const std::vector<double> &timings);
    static void printResults(const std::vector<double> &timings);
    static void saveResults(const std::vector<double> &timings, const std::string &filePath);
};

#endif
