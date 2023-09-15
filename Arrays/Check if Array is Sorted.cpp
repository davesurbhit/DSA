// 📝 Efficient Approach:
// To efficiently check if an array is sorted, we'll follow this streamlined strategy:

// Begin by traversing through the array, typically from the first element (index 0) to the last element (index N-1).

// For each element arr[i], compare it with the previous element, arr[i-1].

// If, at any point, you find that arr[i] is less than arr[i-1], return false. This indicates that the array is not sorted in ascending order.

// Continue this comparison for the entire array. If you complete the loop without finding any instances where arr[i] is less than arr[i-1], return true. This confirms that the array is sorted in ascending order.

bool arraySortedOrNot(int arr[], int n) {
        // efficient
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i])
                return false;
            }
        return true;
    }