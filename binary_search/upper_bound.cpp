int upper_bin_search(vector<int>& nums, int low, int high, int x) {
    if (low > high) return low;

    int mid = (low+high)/2;

    if (nums[mid] == x) return mid+1;
    else if (nums[mid] > x) return upper_bin_search(nums, low, mid-1, x);
    else upper_bin_search(nums, mid+1, high, x);
}

int upperBound(vector<int> &nums, int x, int n){
	return upper_bin_search(nums, 0, n-1, x);	
}
