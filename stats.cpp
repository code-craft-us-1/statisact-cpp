#include "stats.h"

using namespace Statistics;
Statistics::Stats Statistics::ComputeStatistics(const std::vector<double>& arr) {
    //Implement statistics here
  Stats outputStruct;
  outputStruct.min = (double)INT_MAX;
  outputStruct.max = (double)INT_MIN;
  double total = 0.0;
  for (int i = 0; i < arr.size(); i++)
  {
    double var = arr.at(i);
    total += var;
    if (var < outputStruct.min)
    {
      outputStruct.min = var;
    }
    if (var > outputStruct.max)
    {
      outputStruct.max = var;
    }
  }

  outputStruct.average = (double)total /(double)arr.size();
  return outputStruct;
}

