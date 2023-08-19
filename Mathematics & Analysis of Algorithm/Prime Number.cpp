// My Approach
int isPrime(int N){
        if(N==1||N==0) return false;
        for(int i=2;i<N/2;i++){
            if(N%i==0){
                return 0;
            }
        }
        return 1;
    }
    
    // Optimized Approach
    int isPrime(int N){
        if(N==1||N==0) return false;
        int j = sqrt(N);
        for(int i=2;i<=j;i++){
            if(N%i==0){
                return 0;
            }
    }
    return 1;
    }