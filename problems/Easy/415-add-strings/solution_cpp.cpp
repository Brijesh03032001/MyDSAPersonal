class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.size()-1, n2=num2.size()-1;
        string &s = (n2>n1)? num2:num1;
        int n= s.size()-1;
        int carry=0;
        while(n1>=0 || n2>=0){
            carry+=(n1>=0?num1[n1--]-'0':0)+(n2>=0?num2[n2--]-'0':0);
            s[n--]='0'+carry%10;
            carry/=10;
        }
        if(carry>0) s.insert(s.begin(), '0'+carry);
        return s;
    }
};