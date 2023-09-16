// 📝 Naive Approach:
// To rotate an array by D steps:

// Left rotate the array by 1 step a total of D times.
// This approach involves repeatedly shifting the array elements one position to the left, D times. While it works, it's less efficient especially for large values of D

void leftRotateOne(int arr[], int n){
        int temp = arr[0];
        for(int i=1;i<n;i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
    }
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        //naive
        //we left rotate array by 1 a total of d time
        for(int i=0;i<d;i++){
            leftRotateOne(arr,n);
        }
    }
    
// 📝 Better Approach:
// To rotate an array by D steps:

// Start by taking the modulo of D with the array length (N) to ensure D falls within the range 0 to N-1. This step prevents potential segmentation faults.

// Create a temporary array to store the first D elements of the original array.

// Shift the remaining elements of the array by D positions to the left. You can achieve this by copying elements from index D to N-1 to their respective positions from 0 to N-D-1.

// Finally, copy the elements from the temporary array back to the original array, filling the remaining indexes from N-D to N-1.

void rotateArr(int arr[], int d, int n){
        // code here
        // better
        d%=n;
        int temp[d];
        for(int i=0;i<d;i++){
            temp[i] = arr[i];
        }
        
        for(int i=d;i<n;i++){
            arr[i-d] = arr[i];
        }
        
        for(int i=0;i<d;i++){
            arr[n-d+i] = temp[i];
        }
        
    }
    
// 📝 Efficient Approach:
// To rotate an array by D steps:

// Start by taking the modulo of D with the array length (N) to ensure D falls within the range 0 to N-1. This prevents segmentation faults and is based on the idea that rotating the array N times results in the same array.

// Divide the problem into three steps:

// a. Reverse the array from index 0 to D-1.

// b. Reverse the array from index D to N-1.

// c. Finally, reverse the entire array.

void reverse(int arr[], int low, int high){
        while(low < high){
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        // efficient
        d %=n;
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
        
    }