class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int largest = arr[0];
	    for (int i = 1; i < n; i++) largest = max(largest, arr[i]);
	    
	    int secondLargest = -1;
	    for (int i = 0; i < n; i++) {
	        if (arr[i] != largest) secondLargest = max(secondLargest, arr[i]); 
	    }
	    
	    return secondLargest;
	}
};
