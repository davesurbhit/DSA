// Approach:
// Use count to track the current sequence and res for the longest found (starts at -1).

// Loop through the array: Increase count for non-zero values, reset at zeros.

// Special start handling: Update res if the array begins with non-zero values.

// Return res as the length of the longest sequence.

int consecutive(int arr[], int n){
    int count = 0,res = -1;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            count++;
        }else if(arr[i] == 0){
            if(count > res){
                res = count;
            }
            count = 0;
        }else if(res == -1||count>res){
            res = count;
        }
    }
    return res;
}

int main() {
    // your code goes here
    int inputs;
    cin >> inputs;
    for(int i=0;i<inputs;i++){
        int days;
        cin >> days;
        int om[days],addy[days];
        for(int j=0;j<days;j++){
            cin >> om[j];
        }
        for(int j=0;j<days;j++){
            cin >> addy[j];
        }
        int oma = consecutive(om,days);
        int ada = consecutive(addy,days);
        
        if(ada > oma){
           cout << "Addy" << endl; 
        }else if(oma > ada){
            cout << "Om" << endl;
        }else{
            cout << "Draw" << endl;
        }
            
    }
    return 0;
}