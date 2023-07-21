vector<int> getFrequencies(vector<int>& v) {
    map<int, int> mp;
    for (auto it: v) mp[it]++;
    int high = INT_MIN, high_val = INT_MAX, low = INT_MAX, low_val = INT_MIN;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second > high) {
            high = it->second;
            high_val = it->first;
        }
        if (it->second < low) {
            low = it->second;
            low_val = it->first;
        }
    }
    return {high_val, low_val};
}