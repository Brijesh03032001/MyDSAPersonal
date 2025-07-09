class Solution {
public:

   // abacc
   // a (bacc)
    void solve(string s, int i, int currCount , int &maxCount, unordered_set<string>st , int &n)
    {
        if(i >= n)
        {
            maxCount = max(maxCount, currCount);
            return;
        }
        if(currCount + (n - i) <= maxCount)
        {
            return;
        }
        for(int j=i;j<n;j++)
        {
            string sub_str = s.substr(i, j-i+1);
            if(st.find(sub_str) == st.end())
            {
                st.insert(sub_str); // DO
                solve(s,j+1, currCount + 1, maxCount, st, n); //Explore
                st.erase(sub_str); // Reverse
            }
        }
        return ;

    }
    int maxUniqueSplit(string s) {
         unordered_set<string>st;
         int i =0;
         int n = s.size();
         int maxCount = 0;
         int currCount = 0;
         solve(s,i,currCount, maxCount, st, n); // the main function;
         return maxCount;
    }
};