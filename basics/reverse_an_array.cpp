void rev(vector<int>& nums, int st, int end) {
    if (st >= end) return;
    swap(nums[st], nums[end]);
    rev(nums, st+1, end-1);
}

vector<int> reverseArray(int n, vector<int> &nums) {
    rev(nums, 0, n-1);
    return nums;

}
