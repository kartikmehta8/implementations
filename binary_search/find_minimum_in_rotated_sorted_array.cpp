int pivot(vector<int>& nums, int low, int high, int big) {
    if (low > high) return low;

    int mid = (low+high)/2;

    if (nums[mid] > big) pivot(nums, mid+1, high, big);
    else pivot(nums, low, mid-1, big);
}

int findMin(vector<int>& arr) {
	int n = arr.size();
	int big = arr[n-1];
	int p = pivot(arr, 0, n-1, big);
	return arr[p];
}