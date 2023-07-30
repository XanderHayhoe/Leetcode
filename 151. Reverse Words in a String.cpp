#include<string>
#include<vector>
#include<sstream>
using namespace std;

/*

Runtime
Details
3ms
Beats 88.66%of users with C++
Memory
Details
8.25mb
Beats 40.03%of users with C++

Less optimal but atleast the code isnt ugly
Stringstream heavily slows down the code
*/

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words; 
        string result = ""; 
        string answer = "";
        stringstream ss(s); // eliminates spacing
        while(ss >> result) {
            words.push_back(result);
        }
        for (int i = words.size() - 1; i >= 0; i--){
            answer += words[i];
            if(i != 0) {
                answer += " ";
            }
        }
        return answer;
    }

};