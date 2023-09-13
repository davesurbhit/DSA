//📝 Naive Method:
//My initial approach involved calculating the factorial and then counting the number
//of zeros separately. While functional, this method encounters overflow issues for larger
//values.

//✅ The Optimized Path:
//The lightbulb moment came when I realized that trailing zeroes in a factorial are
//directly linked to the number of factors of 5 in its prime factorization.
//We know that every 5th number contributes at least one 5 to the factorization.
//But we must also consider numbers like 25, 125, and so on, which have multiple 5's.

//The formula (n/5) + (n/25) + (n/125) elegantly captures this concept,
//allowing us to efficiently calculate trailing zeroes without computing
//the entire factorial.

int trailingZeroes(int N)
    {
        // Write Your Code here
        int res = 0;
        for(int i=5;i<=N;i=i*5){
            res = res + N/i;
        }
        return res;
    }