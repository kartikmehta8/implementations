class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxParen = 0, n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(s[i]);
                int stackSize = st.size();
                maxParen = max(maxParen, stackSize);
            } else if (s[i] == ')' && !st.empty()) st.pop();
            else continue;
        }
        return maxParen;
    }
};