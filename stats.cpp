#include "stats.h"
#include<cmath>
#include<numeric>
#include<algorithm>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& i) {
    //Implement statistics here
    Stats stats;
    if(i.size()==0)
    {
        stats.average = NAN;
        stats.min = NAN;
        stats.max = NAN;
    }
    else
    {
        stats.average = ((float)std::accumulate(i.begin(), i.end(), 0.0f))/i.size();
        stats.min =* std::min_element(i.begin(), i.end());
        stats.max =* std::max_element(i.begin(), i.end());
    }
    return stats;
}
