#include <bits/stdc++.h>
bool isAnagram(string str1, string str2) {
    map<char, int> mp1, mp2;
    int n = str1.size(), m = str2.size();
    if (n != m) return false;
    for (int i = 0; i < n; i++) {
        mp1[str1[i]]++;
        mp2[str2[i]]++;
    }
    for (auto it = mp1.begin(); it != mp1.end(); it++) {
        if (it->second != mp2.find(it->first)->second) return false;
    }
    return true;
}