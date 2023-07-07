bool isValidParenthesis(string expression) {
    stack<char> st;
    for (auto it: expression) {
        if (it == '(' || it == '{' || it == '[') st.push(it);
        else {
            if (it == ')') {
                if (st.size() && st.top() == '(') st.pop();
                else return false;
            } else if (it == ']') {
                if (st.size() && st.top() == '[') st.pop();
                else return false;
            } else {
                if (st.size() && st.top() == '{') st.pop();
                else return false;
            }
        }
    }
    if (st.size()) return false;
    return true;
}
