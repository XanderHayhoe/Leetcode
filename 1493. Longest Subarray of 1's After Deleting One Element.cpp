#include<vector>
using namespace std;
/*

Runtime
Details
28ms
Beats 99.46%of users with C++

Memory
Details
46.43mb
Beats 8.29%of users with C++

*/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start = 0;
        int zeroes = 0;
        int maximum = 0;
        // start needs to be a one after a zero
        // end needs to be the second zero from start
         for (int i = 0; i < nums.size(); i++) {
             if (nums[i] == 0) {
                 zeroes++;
             }
             while(zeroes > 1) {
                 if (nums[start] == 0) {
                     zeroes--;
                 }
                 start++;
             }
             maximum = max(maximum, i - start); 
         } 
    return maximum; 
    }
};