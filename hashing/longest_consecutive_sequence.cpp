class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int result = 0;
        for (auto it: nums) st.insert(it);
        for (auto it: nums) {
            if (st.find(it-1) != st.end()) continue;
            else {
                int count = 1;
                int t = it+1;
                while (st.find(t) != st.end()) {
                    t++;
                    count++;
                }
                result = max(result, count);
            }
        }
        return result;
    }
};
