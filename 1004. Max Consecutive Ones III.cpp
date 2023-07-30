#include<vector>
using namespace std;
/*
Runtime
Details
43ms
Beats 99.57%of users with C++

Memory
Details
55.44mb
Beats 42.22%of users with C++


*/
class Solution {
public:
     int longestOnes(vector<int>& nums, int k) {
        int start = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                k--;
            }
            if (k < 0 && nums[start++] == 0) {
                k++;
            }
        }
        return nums.size() - start;
    }
};