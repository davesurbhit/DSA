// 📝 Approach:
// Using a basic for loop, I compare each problem's difficulty with the previous one. If the previous problem is easier than the current one, it ensures the list is in ascending difficulty order.

bool increasingOrder(int n,int arr[]){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
    
}

int main() {
    // your code goes here
    int num;
    cin >> num;
    for(int i=0;i<num;i++){
        int test;
        cin >> test;
        int arr[test];
        for(int j=0;j<test;j++){
            cin >> arr[j];
            
        }
        if(increasingOrder(test,arr)){
         cout << "Yes" << endl;   
        }else{
        cout << "No" << endl;    
        }
        
    }
    return 0;
}