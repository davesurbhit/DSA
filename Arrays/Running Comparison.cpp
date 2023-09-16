// 📝 Approach:
// I use a for loop to iterate through arrays A and B simultaneously. For each pair of elements at index i, I count instances where A[i] <= 2B[i] and B[i] <= 2A[i]. The final count is the answer.

int num_of_happy(int n,int A[],int B[]){
    int count = 0;
    for(int i=0;i<n;i++){
        if(A[i]<=2*B[i] && B[i]<=2*A[i]){
            count++;
        }
    }
    return count;
}

int main() {
    // your code goes here
    int num;
    cin >> num;
    for(int i=0;i<num;i++){
        int days;
        cin >> days;
        int A[days], B[days];
        for(int j=0;j<days;j++){
            cin >> A[j];
        }
        
        for(int j=0;j<days;j++){
            cin >> B[j];
        }
        
        cout << num_of_happy(days,A,B) << endl;
    }
    return 0;
}