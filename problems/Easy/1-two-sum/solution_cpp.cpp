class Solution {
public:
    int fi(vector<int>&nums, int search)
    
    {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==search)
            {
                ans=i;
                break;
            }
            else
            {
                continue;
            }
        }
        return ans;
    }
    int fi_end(vector<int>&nums, int search)
    
    {
        int ans=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==search)
            {
                ans=i;
                break;
            }
            else
            {
                continue;
            }
        }
        return ans;
    }
    vector<int> twoSum(vector<int>& nums, int target) {

           vector<int>temp= nums;
        sort(temp.begin(),temp.end());
        int p1=0;
        int p2=temp.size()-1;
        vector<int>ans;
        while(p1<p2)
        {
            if(temp[p1]+temp[p2]<target)
            {
                p1++;
            }
            else if( temp[p1]+temp[p2]>target)
            {
                p2--;
            }
            else
            {
                //cout<<temp[p1];
                //cout<<temp[p2];
                //int a1 = fi(nums, temp[p1]);
                
                ans.push_back(fi(nums,temp[p1]));
                ans.push_back(fi_end(nums,temp[p2]));
                break;
                
            }
        }
        return ans;
        
    }
};