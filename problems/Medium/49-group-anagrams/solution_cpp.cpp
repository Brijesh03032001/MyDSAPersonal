class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<string>temp= strs;
//         unordered_map<string,vector<int>>vc;
        
//         for(int i=0;i<strs.size();i++)
//         {
            
//             sort(temp[i].begin(),temp[i].end());
//             vc[temp[i]].push_back(i);
            
//         }
        
//         vector<vector<string>>an;
//         for(auto i : vc)
//         {
//             vector<string>ans;
//             for(auto p : i.second)
//             {
//                 ans.push_back(strs[p]);
//             }
//             an.push_back(ans);
//         }
//         return an;
        map<vector<int>,vector<int>> temp2;
        for(int i=0;i<strs.size();i++) {
            vector<int> fre(26);
            for(auto &c:strs[i]) fre[c-'a']++;
            temp2[fre].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto &it:temp2) {
            vector<string> tempans;
            for(auto &num:it.second) {
                tempans.push_back(strs[num]);
            }
            ans.push_back(tempans);
        }
        return ans;
    }
};