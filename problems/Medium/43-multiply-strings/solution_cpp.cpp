class Solution {
public:
    string multiply(string num1, string num2) {
      if(num1=="0" || num2=="0")
          return "0";
        vector<int> answer(num1.size()+num2.size(),0);
        for(int i=num1.size()-1;i>=0;i--){
            for(int j=num2.size()-1;j>=0;j--){
                answer[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                answer[i+j]+=answer[i+j+1]/10;
                answer[i+j+1]%=10;
            }
        }
        int x=0;
        string ans="";
        while(answer[x]==0)x++;
        while(x<answer.size()){
            ans+=to_string(answer[x++]);
        }
        return ans;
        
    }
};