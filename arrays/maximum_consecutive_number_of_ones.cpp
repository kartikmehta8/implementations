#include <bits/stdc++.h> 
int consecutiveOnes(vector<int>& arr){
    int maxi = 0, count = 0;
    for (auto it: arr){
        if (it == 1) count++;
        else count = 0;
        maxi = max(maxi, count);
    }
    return maxi;
}
