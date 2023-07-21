#include <bits/stdc++.h>
vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> result(n, 0);
    for (auto it: nums) result[it-1]++;
    return result;
}