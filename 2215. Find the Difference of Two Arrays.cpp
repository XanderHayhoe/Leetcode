#include<string>
#include<vector>
#include<unordered_set>
using namespace std;
/*

Runtime
Details
51ms
Beats 85.30%of users with C++

Memory
Details
31.08mb
Beats 83.33%of users with C++

*/



class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> hash1(nums1.begin(), nums1.end());
        unordered_set<int> hash2(nums2.begin(), nums2.end());
        vector<vector<int>> ans (2);
        for(int i = 0; i < nums1.size(); i++) {
            if(hash2.count(nums1[i]) == 0 && std::count(ans[0].begin(), ans[0].end(), nums1[i]) ==0 ) {
                ans[0].push_back(nums1[i]);
            }
        }
        for(int i = 0; i < nums2.size(); i++) {
            if(hash1.count(nums2[i]) == 0 && std::count(ans[1].begin(), ans[1].end(), nums2[i]) == 0) {
                ans[1].push_back(nums2[i]);
            }
        }      
        return ans;
        // iterate thru array 1
        // 
    }
};