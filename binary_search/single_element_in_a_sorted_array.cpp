int singleNonDuplicate(vector<int>& arr) {
	int result = 0;
	for (auto it: arr) result ^= it;
	return result;
}