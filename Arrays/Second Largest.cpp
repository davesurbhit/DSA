// 📝 Naive Approach:
// In the naive approach, we take a more straightforward route to find the second largest element:

// First, we find the largest element in the array using a function like getLargest(). Let's call it largest.

// Initialize a variable res to -1. This will eventually store the index of the second largest element.

// Traverse through the array from index 0 to N.

// For each element arr[i], check if it's not equal to the largest element (arr[i] != arr[largest]).

// If arr[i] is not equal to the largest, we proceed to check if res is still -1. If it is, we update res with i.

// If res is not -1 (meaning we've already found a candidate for the second largest), we compare arr[i] with arr[res].

// If arr[i] is greater than arr[res], we update res with i. This ensures that res always points to the index of the second largest element in the array.

int getLargest(int arr[], int n){
        int res=0;
        for(int i=1;i<n;i++){
            if(arr[i] > arr[res]){
                res = i;
            }
        }
        return res;
    }
    
    int print2largest(int arr[], int n) {
        // code here
        //Naive
        int largest = getLargest(arr,n);
        int res = -1;
        
        for(int i=0;i<n;i++){
            if(arr[i]!= arr[largest]){
                if(res == -1)
                    res = i;
               else if(arr[i] > arr[res])
                    res = i;
            }
        }
        if(res == -1)
            return res;
        
        return arr[res];
    }
    

// 📝 Efficient Approach:
// To unveil the second largest element while optimizing our comparisons, we'll follow this smart strategy:

// Start by initializing two variables, largest and res, both set to -1.

// Traverse the array from 0 to N.

// For each element arr[i], compare it with arr[largest].

// If arr[i] is greater than arr[largest], update largest to i. This indicates that arr[i] is the new largest element.

// But here's where the efficiency shines: If arr[i] is not equal to arr[largest], we know that it's not the largest element. In this case, compare arr[i] with arr[res].

// If arr[i] is greater than arr[res], update res to i. Now, res points to the second largest element.

int print2largest(int arr[], int n) {
        // efficient
        int res = -1, largest = 0;
        
        for(int i=0;i<n;i++){
            if(arr[i]> arr[largest]){
                res = largest;
                largest = i;
            }else if(arr[i]!= arr[largest]){
                if(res == -1 || arr[i]>arr[res])
                    res = i;
            }
        }
        if(res == -1)
            return -1;
        return arr[res];
    }