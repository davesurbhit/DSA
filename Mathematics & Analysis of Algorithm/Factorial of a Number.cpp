//📝 My Approach:
//My initial strategy included an "if" condition to handle base cases (0 and 1),
//followed by a "while" loop to iteratively multiply the numbers and build the factorial.
//Recognizing the potential for larger numbers, I wisely opted for a "long long int"
//to handle the increased magnitude.

long long int factorial(int N){
       long long int fact = 1;
       if(N==0||N==1){
           return 1;
       }
       while(N!=1){
           fact = fact*N;
           N--;
       }
       return fact;
    }
    
//✅ Enhanced Efficiency:
//As we refine our approach, a pivotal realization emerged.
//By employing recursion, we can elegantly unravel factorials while minimizing code length.
//This not only simplifies the process but also enhances readability and maintainability.

long long int factorial(int N){
 
        if(N == 0)
            return 1;
        return N*factorial(N-1);
    }