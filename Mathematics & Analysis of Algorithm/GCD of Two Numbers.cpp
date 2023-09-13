//📝 My Initial Approach:
//I initially utilized a "for" loop to check for the highest number that completely
//divides both given numbers. Starting from the smaller number and descending to 1,
//this approach works but can be inefficient for large numbers.

int gcd(int A, int B) 
    { 
        // code here
        if(A==B){
            return A;
        }else if(A>B){
            for(int i=B;i>=1;i--){
                if(A%i==0 && B%i==0){
                    return i;
                }
            }
        }else{
            for(int i=A;i>=1;i--){
                if(A%i==0 && B%i==0){
                    return i;
                }
            }
        }
          
    }
    
//✅ The Optimized Path:
//Enter the Euclidean Algorithm, a brilliant approach for GCD calculation.
//It's both elegant and efficient. Here's how it works:

//If b is smaller than a, we know that gcd(a, b) is equal to gcd(a - b, b).

//Instead of repeated subtraction, we use modular division: gcd(b, a % b).

//This recursive method simplifies GCD calculation, significantly improving efficiency.

int gcd(int A, int B) 
    { 
       if(B==0)
        return A;
       else
        return gcd(B,A%B);
    }
