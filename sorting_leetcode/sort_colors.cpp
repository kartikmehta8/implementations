class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = nums.size()-1, pointer = 0;
        while (pointer <= j) {
            if (nums[pointer] ==  0) {
                swap(nums[i], nums[pointer]);
                i++;
                pointer++;
            } else if (nums[pointer] == 2) {
                swap(nums[pointer], nums[j]);
                j--;
            } else pointer++;
        }
    }
};