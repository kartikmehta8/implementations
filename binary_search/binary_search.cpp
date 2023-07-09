int bin_search(vector<int>& nums, int low, int high, int target) {
    if (low > high) return -1;

    int mid = (low+high)/2;

    if (nums[mid] == target) return mid;
    else if (nums[mid] > target) return bin_search(nums, low, mid-1, target);
    else bin_search(nums, mid+1, high, target);
}

int search(vector<int>& nums, int target) {
    return bin_search(nums, 0, nums.size()-1, target);
}
