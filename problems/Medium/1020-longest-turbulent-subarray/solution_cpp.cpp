class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n= arr.size();
        vector<int>up(n);
        vector<int>down(n);
        if(n==1) return 1;
        up[0]=down[0]=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                up[i]=1;
                down[i]=1;
            }
            else if(arr[i]>arr[i-1])
            {
                up[i]=down[i-1]+1;
                down[i]=1;    
            }
            else
            {
                up[i]=1;
                down[i]=up[i-1]+1;
            }
            
        }
        
        int a= *max_element(up.begin(),up.end());
        int b= *max_element(down.begin(),down.end());
        int res= max(a,b);
        return res;
        
    }
};