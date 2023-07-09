#include <bits/stdc++.h> 

void fsearch(vector<int>& nums, int low, int high, int x, int& first) {
    if (low > high) return;

    int mid = (low+high)/2;

    if (nums[mid] == x) {
        first = mid;
        fsearch(nums, low, mid-1, x, first);
    }
    else if (nums[mid] > x) fsearch(nums, low, mid-1, x, first);
    else fsearch(nums, mid+1, high, x, first);
}

void lsearch(vector<int>& nums, int low, int high, int x, int& last) {
    if (low > high) return;

    int mid = (low+high)/2;

    if (nums[mid] == x) {
        last = mid;
        lsearch(nums, mid+1, high, x, last);
    }
    else if (nums[mid] > x) lsearch(nums, low, mid-1, x, last);
    else lsearch(nums, mid+1, high, x, last);
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = -1, last = -1;
    fsearch(arr, 0, n-1, k, first);
    lsearch(arr, 0, n-1, k, last);
    return pair<int, int>{first, last};
}