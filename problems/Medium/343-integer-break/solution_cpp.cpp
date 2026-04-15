class Solution {
public:
    int sol(vector<int> &arr, int i, int total)
    {
        if(i<0) return 1;
        if(total == 0 ) return 1;
        
        
        if(arr[i] > total)
        {
            return sol(arr, i-1, total);
        }
        else
        {

        int inc = arr[i]*sol(arr,i, total - arr[i]);
        int exc = sol(arr, i-1, total);
        return max(inc, exc);
        }

        return 0;


    }
    int integerBreak(int n) {
        
        vector<int> arr;
        for(int i=1;i<=59;i++)
        {
            arr.push_back(i);
        }
        int le = arr.size();
        if(n == 2) return 1;
        if(n==3) return 2;
        return sol(arr, le-1, n);
        
    }
};