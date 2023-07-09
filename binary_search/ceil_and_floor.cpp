int upper_bin_search(int nums[], int low, int high, int x, int n) {
    if (low > high) {
		if (low == n) return -1;
		return nums[low];
	}

    int mid = (low+high)/2;

    if (nums[mid] == x) return nums[mid];
    else if (nums[mid] > x) return upper_bin_search(nums, low, mid-1, x, n);
    else upper_bin_search(nums, mid+1, high, x, n);
}

int lower_bin_search(int nums[], int low, int high, int x) {
    if (low > high) {
		if (low == 0) return -1;
		return nums[low-1];
	}

    int mid = (low+high)/2;

    if (nums[mid] == x) return nums[mid];
    else if (nums[mid] > x) return lower_bin_search(nums, low, mid-1, x);
    else lower_bin_search(nums, mid+1, high, x);
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	sort(arr, arr+n);
	int _high = upper_bin_search(arr, 0, n-1, x, n);
	int _low = lower_bin_search(arr, 0, n-1, x);
	pair<int, int> result = {_low, _high};

	return result;
}

