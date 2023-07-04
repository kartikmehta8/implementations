class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int value = target - nums[i];
            if (mp.find(value) == mp.end()) {
                mp[nums[i]] = i;
            } else {
                result = {mp[value], i};
                break;
            }
        }
        return result;
    }
};
