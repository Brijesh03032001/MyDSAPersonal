class Solution {
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            return true;
        return false;
    }
public:
    string reverseVowels(string s) {
        vector<int> ans;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                ans.push_back(s[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                s[i]=ans[j];
                j++;
            }
        }
        return s;
    }
};