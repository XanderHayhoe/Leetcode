#include<string>
#include<vector>
using namespace std;

/*
Runtime
Details
7ms
Beats 99.77%of users with C++
Memory
Details
20.12mb
Beats 93.14%of users with C++

*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool result;
        if (flowerbed.size() == 1) {
            if(flowerbed[0] == 1) {
                return n == 0;
            }
            return n <= 1;
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            n = n - 1;
            }
        if(flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size()-2] == 0) {
            flowerbed[flowerbed.size()-1] = 1;
            n = n - 1;
            }
        for (int i = 1; i < flowerbed.size()-1; i++) {
            if (flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0) {
                n--;
                flowerbed[i] = 1;
            }
        }
        
        return n <= 0; 
        
    }
};