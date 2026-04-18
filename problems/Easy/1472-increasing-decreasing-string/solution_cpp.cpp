class Solution {
public:
    string sortString(string s) {
        int count[26]; int n=s.length();
        for(int i=0;i<26;i++) count[i]=0;
        for(int i=0;i<n;i++){
            count[s[i]-'a']++;
        }
        string ans="";
        while(true){
            int k=ans.length();
            for(int i=0;i<26;i++){
                if(count[i]!=0){
                    ans+='a'+i;
                    count[i]--;
                }
            }
             for(int i=25;i>=0;i--){
                if(count[i]!=0){
                    ans+='a'+i;
                    count[i]--;
                }
            }
            if(k==ans.length()) break;
        }
        return ans;
    }
};