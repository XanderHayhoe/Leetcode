#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


/*

Runtime
Details
104ms
Beats 62.27%of users with C++
Memory
Details
20.69mb
Beats 53.19%of users with C++

this question was really annoying. would not recommend
*/

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) {
            return false;
        }
        unordered_map<char, int> hash1; // stores letters in word 1 
        unordered_map<char, int> hash2; // stores letters in word 2
        vector<int> count1;
        vector<int> count2;
        string chars1 = "";
        string chars2 = "";
        for (char i : word1) {
            hash1[i]++;    
        }
        for (auto i : word2) {
            hash2[i]++;    
        }
        for (auto [key, value] : hash1) {
            count1.push_back(value);
            chars1 += key;
        }
        for (auto [key, value] : hash2) {
            count2.push_back(value);
            chars2 += key;
        }
        sort(count1.begin(), count1.end());
        sort(count2.begin(), count2.end());
        sort(chars1.begin(), chars1.end());
        sort(chars2.begin(), chars2.end());
        return (count1 == count2 && chars1 == chars2);
    }   
};