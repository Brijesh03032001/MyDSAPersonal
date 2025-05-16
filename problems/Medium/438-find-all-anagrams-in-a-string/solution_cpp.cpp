class Solution {
public:
   bool checkAllZero(vector<int> vc)
    {
        for(auto it : vc)
        {
            if(it != 0)
            {
                return false;
            }
        }
        return true;
    }
    
    vector<int> findAnagrams(string txt, string pat) {
        vector<int> all_char(26,0);
        for(int i=0;i<pat.size();i++)
        {
            all_char[pat[i]-'a'] ++;
        }
        int p1 = 0;
        int p2=0;
        int dis = pat.size();
        int le = txt.size();
        vector<int> ans;
        while(p2 < le)
        {
                all_char[txt[p2] - 'a']--;
                // cout << "Before" << "\n";
                // for(auto it : all_char)
                //   {
                //     cout << it << " " ;
                //   }
                //   cout << "\n";
                if(p2 - p1 + 1 == dis )
                {
                    if( checkAllZero(all_char))
                    {
                    ans.push_back(p1);
                        
                    }
                    all_char[txt[p1] - 'a']++; 
                    p1++;
                }
                // cout << "After " << "\n";
                // for(auto it : all_char)
                //   {
                //     cout << it << " " ;
                //   }
                //   cout << "\n";
                p2++;
        }
            
            return ans; 
    }
};