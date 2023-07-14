#include <bits/stdc++.h>

string commonPrefix(vector<string>& arr,int n){
	int minSize = INT_MAX, x = 0, boolean = 1;
	for (auto it: arr) {
		int y = it.size();
		minSize = min(minSize, y);
	}
	while (x < minSize) {
		char ch = arr[0][x];
		for (auto it: arr) {
			if (it[x] != ch) {
				boolean = 0;
				break;
			}
		}
		if (boolean == 0) break;
		x++;
	}
	if (x == 0) return "-1";
	string result = "";
	for (int i = 0; i < x; i++) result += arr[0][i];
	return result;
}
