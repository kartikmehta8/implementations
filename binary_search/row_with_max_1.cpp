int upper_bin_search(vector<int>& nums, int low, int high, int x) {
    if (low > high) return low;

    int mid = (low+high)/2;

    if (nums[mid] == x || nums[mid] < x) return upper_bin_search(nums, mid+1, high, x);
    else return upper_bin_search(nums, low, mid-1, x);
}

int lower_bin_search(vector<int>& nums, int low, int high, int x) {
    if (low > high) return low;

    int mid = (low+high)/2;

    if (nums[mid] == x || nums[mid] > x) return lower_bin_search(nums, low, mid-1, x);
    else lower_bin_search(nums, mid+1, high, x);
}

int count(vector<int>& arr, int n, int x) {
	int l = lower_bin_search(arr, 0, n-1, x);
	int h = upper_bin_search(arr, 0, n-1, x);
	return h-l;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int result = -1, ind = 0, countt = 0;
    for (auto vec: matrix) {
        int c = count(vec, vec.size()-1, 1);
        if (c != 0 && c > countt) {
            result = ind;
            countt = c;
        }
        ind++;
    }
    return result;
}