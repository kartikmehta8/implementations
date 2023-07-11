class Solution {
public:
    int maximumGap(vector<int>& arr) {
        int diff = INT_MIN, n = arr.size();
        if (n < 2) return 0;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n-1; i++) diff = max(diff, abs(arr[i]-arr[i+1]));
        return diff;
    }
};