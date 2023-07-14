int maxDepth(string s) {
	int count = 0;
	stack<int> st;
	for (auto it: s) {
		if (it == '(') {
			st.push(it);
			int s = st.size();
			count = max(count, s);
		}
		else if (it == ')') st.pop();
	}
	return count;
}
