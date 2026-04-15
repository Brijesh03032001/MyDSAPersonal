class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int ans = 0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                for(int k= j+1 ; k<arr.size();k++)
                {
                    bool a1 = (abs(arr[i] - arr[j]) <= a);
                    bool a2 = (abs(arr[j] - arr[k]) <= b);
                    bool a3 = (abs(arr[i] - arr[k]) <= c);
                    if(a1 && a2 && a3)
                    {
                        ans++;
                    }

                }
            }
        }
        return ans;
    }
};