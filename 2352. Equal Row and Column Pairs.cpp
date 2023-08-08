#include<vector>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        // compare row hash to columns 
        // hash row index based on column index
    unordered_map<vector<int>, int> hash;
    int count= 0;
    string s = "";
    for(int row = 0; row < grid.size(); row++) {
        hash[grid[row]]++;
        s = ""; 
    }
    for(int row = 0; row < grid.size(); row++) {
        for (int col = 0; col < grid[row].size(); col++) {
            s += to_string(grid[col][row]) + " ";
    }
        if(hash[s] != 0) {
        count += hash[s];
        }
    s = "";
    }

    return count;
    }
};