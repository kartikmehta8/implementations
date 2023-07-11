class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int diff = INT_MAX, n = arr.size();
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n-1; i++) diff = min(diff, abs(arr[i]-arr[i+1]));
        for (int i = 0; i < n-1; i++) {
            if (abs(arr[i]-arr[i+1]) == diff) {
                vector<int> t = {arr[i], arr[i+1]};
                result.push_back(t);
            }
        }
        return result;
    }
};