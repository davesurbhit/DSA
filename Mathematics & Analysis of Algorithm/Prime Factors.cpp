// My Initial Approach (Naive Method):
//I initially employed a for loop from 2 to N to check if N is divisible by any 
//number during traversal, and then I checked if that number is prime or not. 
//While functional, this method can be time-consuming for larger numbers.

vector<int>AllPrimeFactors(int N) {
        // Code here
        // Naive
        vector<int> abc;
        for(int i=2;i<=N;i++){
            if(isPrime(i)){
                if(N%i== 0){
                    abc.push_back(i);
                }
            }
        }
        return abc;
    }
    
//✅ The Best Approach:

//Divisibility by 2 and 3: Start by quickly checking if N is divisible by 2. 
//If it is, add 2 to your output and keep dividing N by 2 until it's not divisible anymore. 
//Repeat this process for 3.

//Sieve of Eratosthenes Variant: Use a variant of the Sieve of Eratosthenes method. 
//Keep checking for prime numbers beyond 3, and if N is divisible by a prime number, 
//add that prime number to your output.

//This approach significantly reduces computation and is highly efficient for 
//finding prime factors.

vector<int>AllPrimeFactors(int N){
        // Best Solution
        set<int> ans;
        vector<int> abc;
        if(N<=1){
            return abc;
        }
        while(N%2 == 0){
            ans.insert(2);
            N /=2;
        }
        while(N%3 == 0){
            ans.insert(3);
            N/= 3;
        }
        
        for(int i=5; i*i <= N;i++){
            while(N%i == 0){
                ans.insert(i);
                N /= i;
                
            }
           
            while(N%(i+2) == 0){
                ans.insert(i+2);
                N /= i+2;
            }
        }
        if(N > 3){
                ans.insert(N);
        }
        abc.assign(ans.begin(),ans.end());
        return abc;
}

