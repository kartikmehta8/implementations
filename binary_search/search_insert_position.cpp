int insert(vector<int>& nums, int low, int high, int x) {
    if (low > high) return low;

    int mid = (low+high)/2;

    if (nums[mid] == x) return mid;
    else if (nums[mid] > x) return insert(nums, low, mid-1, x);
    else insert(nums, mid+1, high, x);
}

int searchInsert(vector<int>& nums, int x) {
	return insert(nums, 0, nums.size()-1, x);
}
