class Solution {
public:
    int percentageLetter(string s, char letter) {
      
      int le=s.size();
      char re= letter;
      int ans=0;
      for(int i=0;i<le;i++)
      {
        if(s[i]==re)
        {
          ans++;
        }
      }
      return ((ans*100)/le);  
    }
};