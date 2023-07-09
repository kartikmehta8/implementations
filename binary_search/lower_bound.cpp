int lower_bin_search(vector<int>& nums, int low, int high, int x) {
    if (low > high) return low;

    int mid = (low+high)/2;

    if (nums[mid] == x) return mid;
    else if (nums[mid] > x) return lower_bin_search(nums, low, mid-1, x);
    else lower_bin_search(nums, mid+1, high, x);
}

int lowerBound(vector<int> nums, int n, int x) {
	return lower_bin_search(nums, 0, n-1, x);
}

