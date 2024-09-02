#include "stats.h"
#include <numeric>
#include <cmath>
#include <algorithm>
using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& ip1) {
    //Implement statistics here

    Stats sts;
    
    if(ip1.size()==0)
    {
        sts.average = NAN;
        sts.min = NAN;
        sts.max = NAN;
    }
    else
    {
        sts.average=((float)std::accumulate(ip1.begin(),ip1.end(),0.0f))/ip1.size();
        sts.min =* std::min_element(ip1.begin(),ip1.end());
        sts.max =* std::max_element(ip1.begin(),ip1.end());
    }
    return sts;
}
