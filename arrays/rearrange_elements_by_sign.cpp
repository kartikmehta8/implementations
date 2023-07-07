vector<int> alternateNumbers(vector<int>&a) {
    vector<int> result(a.size());
    int positive = 0, negative = 1, n = a.size();
    
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            result[positive] = a[i];
            positive += 2;
        } else {
            result[negative] = a[i];
            negative += 2;
        }
    }

    return result;
}
