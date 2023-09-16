// 📝 Approach:
// Using a for loop, I check if each item's freshness level (from array A) exceeds a set threshold. If yes, I add the corresponding cost (from array B) to a running total.

int main() {
    // your code goes here
    int num;
    cin >> num;
    for(int i=0;i<num;i++){
        int items, fresh_sc;
        cin >> items >> fresh_sc;
        
        int A[items], B[items];
        
        for(int j=0;j<items;j++){
            cin >> A[j];
        }
        for(int j=0;j<items;j++){
            cin >> B[j];
        }
        
        int price = 0;
        
        for(int j=0;j<items;j++){
            if(A[j] >= fresh_sc){
                price += B[j];
            }
        }
        cout << price << endl;
        
    }
    return 0;
}