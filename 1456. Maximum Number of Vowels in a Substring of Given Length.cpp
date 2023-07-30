#include<string>
#include<vector>




using namespace std;
/*
Runtime
Details
22ms
Beats 64.03%of users with C++

Memory
Details
9.93mb
Beats 55.03%of users with C++

*/
class Solution {
public:
    int maxVowels(string s, int k) {
        //these questions are always stupid because you have to hardcode vowels
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int maximum = 0;
        int curr = 0;
        //init sliding window
        for(int i = 0; i < k; i++) {
            if (std::find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
                maximum += 1;
            }
        }
        curr = maximum;
        for(int i = 1; i < s.size()-k+1; i++) {
            if (std::find(vowels.begin(), vowels.end(), s[i+k-1]) != vowels.end()) {
                curr += 1;
            }
            if (std::find(vowels.begin(), vowels.end(), s[i-1]) != vowels.end()) {
                curr -= 1;
            }
            maximum = max(maximum, curr);
        }
        return maximum;
    }
};