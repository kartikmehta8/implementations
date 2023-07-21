/*
    Time Complexity: O( N ^ 2 )
    Space Complexity: O( N )

    Where 'N' is the size of the array 'arr'.
*/
void insertionSortHelper(vector<int> &arr, int i, int n)
{

	// Base Case: i == n.
	if (i == n) {
		return;
	}

	int j = i;

	while (j > 0 && arr[j - 1] > arr[j]) {

		// Swap 'arr[j]' and 'arr[j-1]', and decrement 'j'.
		swap(arr[j], arr[j - 1]);
		j--;
	}

	// Call recursive function for the next element.
	insertionSortHelper(arr, i + 1, n);
}
void insertionSort(vector<int> &arr, int n)
{

	// Call recursive function.
	insertionSortHelper(arr, 0, n);
}