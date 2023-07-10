#include <bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	int n = v.size();
	map<int, int> mp;
	vector<int> result;
	for (auto it: v) mp[it]++;
	for (auto it = mp.begin(); it != mp.end(); it++) {
		if (it->second > n/3) result.push_back(it->first);
	}
	return result;
}