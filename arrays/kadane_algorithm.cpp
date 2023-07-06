#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n) {
    long long currSum = 0, maxSum = LONG_MIN;
    for (int i = 0; i < n; i++) {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0) currSum = 0;
        if (maxSum < 0) maxSum = 0;
    }
    return maxSum;
}
