class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        unordered_map<string,int>mp;
        vector<string>res;
        for(int i=0;i<words.size();i++)
        {
            
            string ref = words[i];
            sort(ref.begin(), ref.end());
            if(mp.find(ref) == mp.end())
            { 
                  res.push_back(words[i]);
                   mp.clear();
                  mp[ref] ++;
            }

        }
        return res;
    }
};