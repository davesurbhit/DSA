// 📝 Naive Approach:
// The naive approach to moving all zeroes to the end of an array typically involves using two nested for loops:

// The outer loop iterates through the array, focusing on each element one at a time.

// The inner loop is used to find the next non-zero element in the array. It scans through the elements after the current element (from the outer loop).

// When a zero is encountered in the outer loop, and the inner loop finds a non-zero element, swap the positions of the zero and the non-zero element.

// Continue this process until all zeroes are moved to the end of the array.

// While this approach works, it requires nested loops and multiple iterations, making it less efficient compared to the single-pass method described earlier.

void pushZerosToEnd(int arr[], int n) {
        // code here
        
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                for(int j=i+1; j<n;j++){
                    if(arr[j] !=0)
                        swap(arr[i], arr[j]);
                }
            }
        }
    }
    
// 📝 Efficient Approach:
// To efficiently rearrange an array by moving all zeroes to the end, follow this elegant strategy:

// Initialize a variable count to 0. This variable will serve as a pointer, keeping track of the leftmost zero in the array.

// Traverse through the array, typically using a for loop.

// For each element arr[i], if it's not equal to zero (arr[i] != 0), swap it with arr[count].

// Increment count by 1.

// This efficient approach ensures that all non-zero elements are on the left side of the array, and all zeroes are neatly moved to the end, without the need for a second loop.

void pushZerosToEnd(int arr[], int n) {
        // code here
        int count = 0;
        
        for(int i=0; i<n; i++){
            if(arr[i] != 0){
                swap(arr[i], arr[count]);
                count++;
            }
        }
    }