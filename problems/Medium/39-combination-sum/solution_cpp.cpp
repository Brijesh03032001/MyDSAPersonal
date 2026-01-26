class Solution {
public:
    vector<vector<int>>res;
  
    void sol(vector<int>&fi, vector<int>&arr,int t ,int n)
    {
      if(t==0) 
      {
        res.push_back(fi);
        return ;
      }
      if(n==0)
      {
        return ;
      }
      
     
     if(arr[n-1]<=t)
      {
        fi.push_back(arr[n-1]);
        sol(fi,arr,t-arr[n-1],n);
        fi.pop_back();
      }
      sol(fi,arr,t,n-1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>fs;
      sol(fs, candidates, target, candidates.size());
      return res;
    }
};