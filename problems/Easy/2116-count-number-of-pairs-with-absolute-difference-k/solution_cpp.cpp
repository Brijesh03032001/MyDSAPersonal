class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        map<int,int> mp;
        int cnt=0;
        for (int i=0; i<nums.size(); i++)mp[nums[i]]++;
        for (auto val: mp){
            if (mp.find(val.first+k)!=mp.end()){
                //int vv= min(mp[val.first+k],mp[val.first]);
                cnt+=(mp[val.first+k]*mp[val.first]);
            }
        }
        return cnt;
    }
};