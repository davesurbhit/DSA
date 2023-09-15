//Efficient Approach:
//Here's how we can efficiently sieve out prime numbers using the Sieve of Eratosthenes:

//Setup: Initialize a boolean vector of size N+1 with all values set to true. Create an int vector to store prime numbers.

//Main Loop: Traverse from i=2 to N. Initially, store the index i if it's marked as true in the int vector.

//Marking Multiples: Now, here's the efficiency trick: To mark all multiples of i, we start from i * i (this avoids marking numbers that are already marked by smaller primes) and increment by i. For example, if i is 2, we mark 4, 6, 8, 10, and so on, as false.

//By doing this, we effectively eliminate non-prime multiples and ensure we're left with the prime numbers.

//This approach significantly reduces the computational effort required to find prime numbers.

vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<bool> isPrime(N+1, true);
        vector<int> ans;
        
        for(int i=2;i*i<=N;i++){
            if(isPrime[i]){
                for(int j=2*i;j<=N;j=j+i){
                    isPrime[j] = false;
                }
            }
        }
        for(int i =2;i<=N;i++){
            if(isPrime[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }