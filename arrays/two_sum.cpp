#include <bits/stdc++.h>

string read(int n, vector<int> book, int target) {
    map<int, int> mp;
    for (int i = 0; i < book.size(); i++) {
        int val = target-book[i];
        if (mp.find(val) != mp.end()) return "YES";
        else mp[book[i]] = i;
    }
    return "NO";
}

