#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
        if(intervals.empty()) return {};

        std::sort(intervals.begin(),intervals.end());
        std::vector<std::vector<int>> merged;

        for(const auto& interval : intervals){
            if(merged.empty() || merged.back()[1]<interval[0]){
                merged.push_back(interval);
            }else{
                merged.back()[1] = std::max(merged.back()[1], interval[1]);
            }
        }
        return merged;
    }
};