class Solution {
public:
    bool ans(vector<int>&derived, int start)
    {
        int temp = start;
        int res = 0;
        for(int i=0;i<derived.size();i++)
        {
            res = start ^ derived[i];
            start = res;
        }
        if(res == temp)
        {
          return true;
        }
        return false;
    }
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();

        bool b1= ans(derived, 1);
        bool b2 = ans(derived, 0);
        return b1 || b2;
    }
};