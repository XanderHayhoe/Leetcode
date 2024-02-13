class Solution {
public:
int removeDuplicates(vector<int>& nums) {
    if (nums.size() <= 2) {
        return nums.size();
    }
    int new_length = 2;
    for (int i = 2; i < nums.size(); ++i) {
        if (nums[i] != nums[new_length - 2]) {
            nums[new_length] = nums[i];
            new_length++;
        }
    }
    return new_length;
}

};