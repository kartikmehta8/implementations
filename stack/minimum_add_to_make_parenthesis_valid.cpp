class Solution {
public:
    int minAddToMakeValid(string str) {
        stack<char> st;
        for (auto it: str) {
          if (it == '(') st.push(it);
          else {
            if (st.size() && st.top() ==  '(') st.pop();
            else st.push(it);
          }
        }
        return st.size();
    }
};