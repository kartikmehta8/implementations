class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                int left = j+1, right = n-1;
                long long fi = (long long)target-(long long)nums[i]-(long long)nums[j];
                while (left < right) {
                    if (nums[left]+nums[right] < fi) left++;
                    else if (nums[left]+nums[right] > fi) right--;
                    else {
                        vector<int> t = {nums[i], nums[j], nums[left], nums[right]};
                        result.push_back(t);
                        while (left < right && nums[right] == t[3]) right--;
                        while (left < right && nums[left] == t[2]) left++;
                    } 
                }
                while (j+1 < n && nums[j] == nums[j+1]) j++;
            }
            while (i+1 < n && nums[i] == nums[i+1]) i++;
        }
        return result;
    }
};
