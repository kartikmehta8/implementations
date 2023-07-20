#include <bits/stdc++.h>

int getBit(int num, int i) {
    while (i > 1) {
        num = num >> 1;
        i--;
    }
    return num%2;
}

int setBit(int num, int i) {
    return ((1 << i-1) | num);
}

int clearBit(int num, int i) {
    return (num & (~(1 << i-1)));
}

vector<int> bitManipulation(int num, int i){
    vector<int> result;
    result.push_back(getBit(num, i));
    result.push_back(setBit(num, i));
    result.push_back(clearBit(num, i));
    return result;
}