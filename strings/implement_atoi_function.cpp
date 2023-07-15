#include <bits/stdc++.h>

int validate(char ch) {
    switch (ch) {
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        case '0':
            return 0;
        case '-':
            return -2;
        default:
            return -1;
    }
    return -1;
}

int atoi(string str) {
    int n = str.size();
    int result = 0, neg = 1;
    for (int i = 0; i < n; i++) {
        int num = validate(str[i]);
        if (num != -1 && num != -2 && num || (!num && result != 0)) {
            result = result*10 + num;
        } else if (num == -2) neg = 0;
    }
    if (neg == 0) return -1*result;
    return result;
}