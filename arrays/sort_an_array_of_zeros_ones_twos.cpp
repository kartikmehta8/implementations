#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n) {
    int i = 0, j = n-1, pointer = 0;
    while (pointer <= j) {
        if (arr[pointer] == 0) {
            swap(arr[i], arr[pointer]);
            i++;
            pointer++;
        } else if (arr[pointer] == 2) {
            swap(arr[pointer], arr[j]);
            j--;
        } else {
            pointer++;
        }
        
    }
}
