#include<vector>
using namespace std;
/*

Runtime
Details
21ms
Beats 83.95%of users with C++

Memory
Details
31.02mb
Beats 77.59%of users with C++

*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // two pointer prefix sums i guess idk
        int right = 0;
        int left = 0;
        for(int i = 0; i < nums.size(); i++){
            right += nums[i]; 
        }
        for(int i = 0; i < nums.size(); i++) {
            right -= nums[i];
            if(left == right) {
                return i;
            }
            left += nums[i];
        }
        return -1;

    }
};