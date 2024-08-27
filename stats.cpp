#include "stats.h"

#include <algorithm> //For std::max and std::min
#include <vector>
#include <cmath>  // For NAN and std::abs
#include <numeric> // For std::reduce
#include <ranges> // For std::ranges and std::ranges

using namespace Statistics;

Stats ComputeStatistics(const std::vector<float>& data) {
    Stats result;

    if (data.empty()) {
        result.average = NAN;
        result.max = NAN;
        result.min = NAN;
        return result;
    }
    
    result.max = std::ranges::max(data);
    result.min = std::ranges::min(data);
    auto const count = static_cast<float>(data.size());
    result.average = std::reduce(data.begin(), data.end()) / count;

    return result;
}
