class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff = arr[1]-arr[0];
        int le= arr.size();
        for(int i=2;i<le;i++)
        {
            if((arr[i]-arr[i-1]) != diff) return false;
        }
        
        return true;
    }
};