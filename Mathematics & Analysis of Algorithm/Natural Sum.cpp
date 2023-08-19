class Solution{
    public:
       int find(int n){
           for(int i=1;i<=n;i++){
             if((i*(i+1))/2 == n) return i;
       }
       return -1;
       }
};