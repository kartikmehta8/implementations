int majorityElement(vector<int> v) {
	int element, count = 0;
	for (auto it: v) {
		if (count == 0) {
			element = it;
			count = 1;
		}
		if (it == element) count++;
		else count--;
	}
	return element;
}
