// 📝 Approach:
// To left rotate an array by one position:

// Save the first element of the array in a temporary variable, let's call it temp.

// Use a for loop to shift elements of the array one position backward. Start from index 1 and go up to the last element.

// In each iteration, set the value of the current element to be the same as the next element.

// Finally, put the value of temp into the last index of the array.

vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    // using extra space
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}