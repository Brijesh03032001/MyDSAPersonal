class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
       unordered_map<int,vector<int>> map; 
        for(int i=0;i<nums.size();i++){ 
            map[nums[i]].push_back(i); 
        } 
        int mnn=INT_MAX; 
        for(auto ch:map){ 
            vector<int> v=ch.second; 
            int curr=(v[0]-0)+(nums.size()-1-v[v.size()-1]); 
            for(int i=0;i<v.size()-1;i++){ 
                curr=max(curr,v[i+1]-v[i]-1); 
            } 
            curr=ceil((double)curr/2); 
            mnn=min(mnn,curr); 
        } 
        return mnn; 
    }
};