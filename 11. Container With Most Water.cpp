#include<vector>
using namespace std;

/* 
Runtime
Details
76ms
Beats 98.27%of users with C++

Memory
Details
58.99mb
Beats 68.92%of users with C++


*/
class Solution {
public:
    int maxArea(vector<int>& nums) {
        int end = nums.size()-1;
        int begin = 0; 
        int max = 0; 
        while(begin < end) {
            if(min(nums[begin], nums[end]) * (end-begin) > max) {
                max = min(nums[begin], nums[end]) * (end-begin);
                if(nums[begin] > nums[end]) {
                    end--;
                }
                else {
                    begin++;
                }
            }
            else {
                if(nums[begin] > nums[end]) {
                    end--;
                }
                else {
                    begin++;
                }
            }
            
        }
        return max;
    }
    
};