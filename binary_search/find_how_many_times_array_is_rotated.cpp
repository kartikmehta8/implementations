int pivot(vector<int>& nums, int low, int high, int big) {
    if (low > high) return low;

    int mid = (low+high)/2;

    if (nums[mid] > big) pivot(nums, mid+1, high, big);
    else pivot(nums, low, mid-1, big);
}

int findKRotation(vector<int> &arr){
    int n = arr.size();
	int big = arr[n-1];
	int p = pivot(arr, 0, n-1, big);
	if (p == n) return 0;
    return p;
}