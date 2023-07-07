#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int minSoFar = prices[0], result = 0, n = prices.size();
    for (int i = 0; i < n; i++) {
        int cost = prices[i]-minSoFar;
        result = max(result, cost);
        minSoFar = min(minSoFar, prices[i]);
    }
    return result;
}
