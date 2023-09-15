//Efficient Approach:
//Building on the concept that divisors appear in pairs, we can streamline 
//our search. Here's how:

//Traverse only up to the square root of N. This reduces computational overhead.
//Check which number completely divides N, and when you find one, store it in a set.
//Include the other divisor (resulting from the pair) without needing 
//another loop by calculating N / divisor.
//Use a set to automatically sort the divisors in ascending order.
//This approach ensures that we efficiently find all divisors without 
//unnecessary iterations and in a sorted manner.

void print_divisors(int n) {
        // Code here.
        set<int> ans;
        for(int i=1;i*i<=n;i++){
            if(n%i == 0){
                ans.insert(i);
                ans.insert(n/i);
            }
        }
        for(auto i : ans){
            cout << i <<" ";
        }
    }