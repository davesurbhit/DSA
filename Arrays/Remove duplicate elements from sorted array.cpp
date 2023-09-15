// 📝 Naive Approach:
// In the naive approach, we ensure a clean and duplicate-free array like this:

// Declare a temporary array temp of the same size as the original array and initialize it with the first element of the array. Also, initialize a variable res to 1.

// Traverse through the original array from the second element (index 1) to the last element (index n-1).

// For each element arr[i], check if it's not equal to temp[res-1]. If it's not equal, copy arr[i] to temp[res] and increment res by 1.

// This loop efficiently skips duplicate elements, ensuring that temp contains only distinct elements.

// Finally, copy the contents of the temp array back to the original arr to get the distinct elements in the sorted order.

int remove_duplicate(int a[],int n){
        // code here
        //naive
        int temp[n];
        temp[0] = a[0];
        int res = 1;
        for(int i=1;i<n;i++){
            if(temp[res-1] != a[i]){
                temp[res] = a[i];
                res++;
            }
        }
        for(int i=0;i<res;i++){
            a[i] = temp[i];
        }
        return res;
    }

// 📝 Efficient Approach:
// To efficiently remove duplicates and obtain a distinct sorted array, we can follow this approach:

// Initialize a variable res to 1. This variable will help us compare and keep track of distinct elements.

// Traverse through the original array, starting from index 1 (element 2) and moving to the last element (index n-1).

// For each element arr[i], compare it with the element at index res-1. If arr[i] is not equal to arr[res-1], it's a distinct element.

// In this case, copy arr[i] to the arr[res] position, and increment res by 1.

// This efficient approach maintains a pointer res that helps us identify distinct elements in the sorted array and eliminate duplicates in-place.

int remove_duplicate(int a[],int n){
        // code here
        // Efficient
        int res = 1;
        for(int i=1;i<n;i++){
            if(a[i] != a[res-1]){
                a[res] = a[i];
                res++;
            }
        }
        return res;
    }