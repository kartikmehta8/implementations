#include <bits/stdc++.h>
bool areIsomorphic(string &str1, string &str2) {
    map<char, char> mp, tp;
    for (int i = 0; i < str1.size(); i++) {
        if (mp.find(str1[i]) == mp.end()) mp[str1[i]] = mp[str1[i]] = str2[i];
        else {
            if (mp[str1[i]] != str2[i]) return false;
        }
        if (tp.find(str2[i]) == tp.end()) tp[str2[i]] = tp[str2[i]] = str1[i];
        else {
            if (tp[str2[i]] != str1[i]) return false;
        }
    }
    return true;
}