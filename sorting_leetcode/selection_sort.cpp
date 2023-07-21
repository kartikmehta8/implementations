void selectionSort(vector<int>&arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++){
        int mi = arr[i], index = i;
        for (int j = i; j < n; j++) {
            if (arr[j] <= mi) {
                mi = arr[j];
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
}