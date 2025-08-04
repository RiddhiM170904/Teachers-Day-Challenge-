#include <vector>
#include <unordered_map>
#include <queue>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;
        for(int num : nums){
            freq[num]++;
        }
        std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>, std::greater<>> minHeap;
        for(auto& elem : freq){
            int num = elem.first;
            int count = elem.second;
            minHeap.push({count, num});
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
        std::vector<int> result;
        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;
    }
};