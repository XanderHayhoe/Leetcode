#include<string>
#include<vector>

/*
Runtime:
Beats 100.00%of users with C++

Memory: 
Beats 68.78% of users with C++

*/

using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies[0]; 
        vector<bool> result;
        for (int i = 1; i < candies.size(); i++) {
            if(candies[i] > max) {
                max = candies[i];
            }
        }
        for (int i = 0; i < candies.size(); i++) {
            if(candies[i] + extraCandies >= max) {
                result.push_back(1);
            }
            else {
                result.push_back(0);
            }
        }
        return result;
    }
};