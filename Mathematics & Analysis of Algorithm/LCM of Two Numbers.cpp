//📝 My Initial Approach (Naive Method):
//I initially employed an infinite for loop, starting from the greater of the two numbers
//and moving towards infinity. I searched for the first number that was divisible by 
//both inputs. While this method theoretically works, it's neither efficient nor 
//practical for larger numbers.

//✅ The Optimized Path:
//Enter the LCM formula: lcm(a, b) = (a * b) / gcd(a, b). This mathematical gem
//simplifies LCM calculation significantly.

 long long gcd(long long a , long long b)
    {
        if(a == 0)
            return b;
        return gcd(b%a, a);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        
        vector<long long> arr(2);
        
        long long g = gcd(A,B);   // gcd of two numbers.
        long long l = (A*B)/g;    // product of 2 numbers divided by their gcd gives their lcm.
        
        arr[0] = l;
        arr[1] = g;
        
        return arr;
    }
