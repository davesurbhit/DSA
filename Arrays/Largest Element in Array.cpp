// 📝 My Efficient Approach (Time Complexity : O(n) ):
// Here's a straightforward yet highly efficient technique to uncover the largest element within an array:

// Start with a variable res initialized to 0. This will serve as our index pointing to the largest element.

// Traverse through the array, typically from i = 1 to N, comparing each element arr[i] with arr[res].

// If arr[i] is greater than arr[res], update res with the value of i. This indicates that the current value of res represents the largest element found so far.

// By employing this approach, we efficiently track the largest element in the array while minimizing unnecessary comparisons.

int largest(vector<int> &arr, int n)
    {
        // Efficient
        int res = 0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[res]){
                res = i;
            }
        }
        return arr[res];
    }