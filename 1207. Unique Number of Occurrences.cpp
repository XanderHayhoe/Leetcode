/* 

Runtime
Details
-ms
Beats 100.00%of users with C++
Memory
Details
8.28mb
Beats 41.10%of users with C++

*/
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        //create a map 
        //each key is a unique number
        //each key points to the number of unique occurances
        unordered_map<int, int> map; 
        for(int i = 0; i < arr.size(); i++) {
            if (map.find(arr[i]) != map.end() ) {
                map.find(arr[i])->second++;
            }
            else {
                map.insert({arr[i], 1});
            }
        }
        unordered_set<int> unique;
        for (auto [key, value] : map) {
            unique.insert(value);
        }
        return (unique.size() == map.size());
    }
};