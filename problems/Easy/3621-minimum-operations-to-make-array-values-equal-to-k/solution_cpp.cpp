class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

       
        set<int>st(nums.begin(), nums.end());
        vector<int>vc(st.begin(),st.end());
        if(vc.size()==1 )
        {
            if(vc[0]== k) return 0;
        }
        sort(vc.begin(),vc.end());
         auto it = upper_bound(vc.begin(), vc.end(), k);

    // Check if upper_bound returned end()
    if (it == vc.begin()) {
        
       int te =  it - vc.begin();
       return vc.size()-te;
    }
    else if(it == vc.begin()+1 && k==vc[0])
    {
      int te =  it - vc.begin();
       return vc.size()-te;   
    }
   
       return -1;
    }
};