#include<vector>
using namespace std;
/*
Runtime
Details
121ms
Beats 99.90%of users with C++
Memory
Details
109.65mb
Beats 30.65%of users with C++

memory usage for this question seems silly because submissions range from
using 109.6mb as the max to 109.4mb for the minimum

*/


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max;
        double curr = 0;
        for(int i = 0; i < k; i++) {
            curr += nums[i];
        }
        max = curr;
        for (int i = 1; i < nums.size()-k+1; i++) {
            curr += nums[i+k-1] - nums[i-1];
            if(max < curr) {
                max = curr;
            }

        }
        return max/k;
    }
};
