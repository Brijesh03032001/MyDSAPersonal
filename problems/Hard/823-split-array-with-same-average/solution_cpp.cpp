class Solution {
public:
   
   unordered_map<int,unordered_map<int,unordered_map<int,bool>>> hm;
    bool makeSum(int k, int i, int sum, vector<int>& nums, vector<int>& suff){
        if(k==0){
            return sum==0;
        }
        if(i==nums.size()){
            return false;
        }
        if(sum>suff[i]){
            return false;
        }
        if(sum<nums[i]){
            return false;
        }
        if(hm[k][i].count(sum)){
            return hm[k][i][sum];
        }
        return hm[k][i][sum]=makeSum(k-1,i+1,sum-nums[i],nums,suff) || makeSum(k,i+1,sum,nums,suff);
    }
    bool splitArraySameAverage(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<int> suff(n);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=nums[i]+suff[i+1];
        }
        for(int i=1;i<=n/2;i++){
            if((suff[0]*i)%n==0){
                if(makeSum(i,0,(suff[0]*i)/n,nums,suff)){
                    return true;
                }
            }
        }
        return false;
    }
};