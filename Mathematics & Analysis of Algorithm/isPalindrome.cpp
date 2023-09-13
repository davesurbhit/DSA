//📝 My Initial Approach:
//I initially separated the digits of the input integer and stored them in a vector.
//Then, using two pointers, I traversed the vector to check for palindromic properties.
//This approach worked, but it involved an extra vector and loop.

string is_palindrome(int n)
        {
             vector<int> pali;
            int p = 0;
            while(n>0){
                pali.push_back(n%10);
                n = n/10;
                p++;
            }
            int j = pali.size();
            for(int i=0;i<j;i++){
                if(pali[i]!=pali[j-1]){
                    return "No";
                }
                j--;
            }
            return "Yes";
        }
        
//✅ The Optimized Path:
//A more elegant solution emerged when I realized that reversing the integer
//and comparing it to the original is the key.
//No extra vector, no extra loop, just a simple reversal and comparison.

string is_palindrome(int n)
        {
            int rev = 0;
            int temp = n;
            
            while(temp!=0){
                int ld = temp%10;
                rev = rev*10+ld;
                temp = temp/10;
            }
            if(rev == n)
                return "Yes";
            else
                return "No";
        }