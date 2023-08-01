#include<vector>
using namespace std;
/*
Runtime
Details
-ms               simply ran too fast to be measured
Beats 100.00%of users with C++

Memory
Details
7.95mb
Beats 49.92%of users with C++
*/

class Solution {
public:
    int largestAltitude(vector<int>& nums) {
        vector<int> sums; 
        sums.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            sums.push_back(nums[i] + sums[i-1]);
     
        }
        return (*max_element(sums.begin(), sums.end()) <= 0) ? 0 : *max_element(sums.begin(), sums.end());
    }
};