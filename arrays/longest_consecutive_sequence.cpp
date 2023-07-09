int longestSuccessiveElements(vector<int>&a) {
    unordered_set<int> st;
    for (auto it: a) st.insert(it);
    int maxSequence = INT_MIN;
    for (auto it = st.begin(); it != st.end(); it++) {
        if (st.find(*it-1) != st.end()) continue;
        else {
            int count = 1;
            while (st.find(*it+count) != st.end()) count++;
            maxSequence = max(maxSequence, count);
        }
    }
    return maxSequence;
}
