// Naive Approach:
// An alternative, less efficient method involves using a nested loop to check each element. For each element, you scan through all elements to its right to see if there exists any element greater than it.

// While the naive approach works, it involves a nested loop and can be less efficient, especially for large arrays, as it requires multiple comparisons for each element.

 vector<int> leaders(int a[], int n){
        vector<int> ans;
        for(int i=0;i<n;i++){
            bool flag = false;
            for(int j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    flag = true;
                    break;
                }
                
            }
            if(flag == false){
                ans.push_back(a[i]);
            }
        }
        return ans;
        
    }
    
// Efficient Approach:
// To find leaders in an array:

// Start by initializing a variable, let's call it currentLeader, with the last element of the array. This element is automatically considered a leader since there are no elements to its right.

// Create a vector to store the leader elements. You'll populate this vector with the currentLeader values.

// Traverse the array in reverse order, starting from the second-to-last element.

// In each step, if you find an element greater than the currentLeader, update currentLeader to the new element and add it to the leader vector.

// Continue this backward traversal until you've covered the entire array.

vector<int> leaders(int arr[], int n){
        vector<int> ans;      
        int curr_lead = arr[n-1];
        ans.push_back(curr_lead);
        for(int i=n-2;i>=0;i--){
            if(curr_lead <= arr[i]){
                curr_lead = arr[i];
                ans.push_back(curr_lead);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
       
    }