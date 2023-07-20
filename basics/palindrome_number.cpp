#include <bits/stdc++.h>
int count(int x) {
    if (x < 10) return 1;
    return 1+count(x/10);
}

int reverse(int x) {
    if (x == INT_MIN || x == INT_MAX) return 0;
    bool neg = false;
    if (x < 0) neg = true;
    x = abs(x);

    int nums = count(x), result = 0;
    while (x > 0) {
        if (result + (x%10)*pow(10, nums-1) >= INT_MAX) return 0; 
        result += (x%10)*pow(10, nums-1);
        nums--;
        x = x/10;
    }
    if (neg) return -1*result;
    return result;
}

bool palindrome(int n) {
    int rev = reverse(n);
    return rev == n;
}