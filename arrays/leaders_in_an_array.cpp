vector<int> superiorElements(vector<int>&a) {
    int leader = -1, n = a.size();
    vector<int> result;
    for (int i = n-1; i >= 0; i--) {
        if (leader == -1) {
            leader = a[i];
            result.push_back(a[i]);
        } else {
            if (leader < a[i]) {
                leader = a[i];
                result.push_back(a[i]);
            } else continue;
        }
    }

    return result;
}
