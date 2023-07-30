#include<vector>
using namespace std;
/*
Runtime
Details
96ms
Beats 99.36%of users with C++

Memory
Details
111.64mb
Beats 70.08%of users with C++


*/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int sing = INT_MAX;
        int doub = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= sing) {
                sing = nums[i];
            }
            else if (nums[i] <= doub) {
                doub = nums[i];
            }
            else {
                return true;
            }
        }
        return false;
    }
};