class Solution {
public:
    long long flowerGame(int n, int m) {
        int num_of_odd = m/2;
        int num_of_eve = m/2 ;

        if(m%2 != 0)
        {
              num_of_odd++;     
        }
        int numOdd_first = n/2;
        int numEve_first = n/2;
        if(n%2 != 0)
        {
              numOdd_first++;     
        }
        long long ans = 0;
        ans += ((long long)numOdd_first * (long long)num_of_eve);
        ans += ((long long)numEve_first * (long long)num_of_odd);
        return ans;
    }
};