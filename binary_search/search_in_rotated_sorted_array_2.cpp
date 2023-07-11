int pivot(vector<int>& nums, int low, int high, int big) {
    if (low > high) return low;

    int mid = (low+high)/2;

    if (nums[mid] > big) pivot(nums, mid+1, high, big);
    else pivot(nums, low, mid-1, big);
}

int bin_search(vector<int>& nums, int low, int high, int target) {
    if (low > high) return -1;

    int mid = (low+high)/2;

    if (nums[mid] == target) return mid;
    else if (nums[mid] > target) return bin_search(nums, low, mid-1, target);
    else bin_search(nums, mid+1, high, target);
}

bool searchInARotatedSortedArrayII(vector<int>&arr, int k) {
    int n = arr.size();
    int big = arr[n-1];
    int p = pivot(arr, 0, n-1, big);
    int result = bin_search(arr, 0, p, k);
    if (result != -1) return true;
    result = bin_search(arr, p, n-1, k);
    if (result != -1) return true;
    return false;
}
