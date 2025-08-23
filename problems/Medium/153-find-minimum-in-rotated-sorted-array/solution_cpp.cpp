class Solution {
public:
    int findMin(vector<int>& arr) {
        int n= arr.size();
        int lo= 0;
        int high = n-1;
        int k=arr[0];
        while( lo <= high)
        {
            int mid = (lo+ high) / 2;
            if(arr[0] > arr[mid])
            {
                k=arr[mid];
                high = mid-1;
            }
            else
            {
                lo=  mid+ 1;
            }
        }
        return k;
    }
};