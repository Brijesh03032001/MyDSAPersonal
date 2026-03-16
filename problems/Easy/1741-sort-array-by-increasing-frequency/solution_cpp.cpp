class Solution {
public:
    
    
     bool static myComp( pair<int , int>  a,pair<int, int>  b)
        
    {
        if(a.second != b.second)
        {
         if( a.second > b.second)
         {
             return false;
         }
            return true;
        }
        else
        {
          if( a.first<b.first)
          {
              return false;
          }
            else
            {
                return true;
            }
        }
    }

    vector<int> frequencySort(vector<int>& nums) {
         
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            
        }
        vector<pair<int,int>>vc;
        for(auto &i : mp)
        {
            vc.push_back(make_pair(i.first,i.second));
        }
        sort(vc.begin(),vc.end(),myComp);
        
        for(auto &i : vc)
        {
            cout<<i.first << "    "<< i.second<<"\n";
        }
        vector<int>res;
          for(auto &i : vc)
        {
           int rep=i.second;
              for(int j=0;j<rep;j++)
              {
                  res.push_back(i.first);
              }
        }
        return res;
    }
    
};