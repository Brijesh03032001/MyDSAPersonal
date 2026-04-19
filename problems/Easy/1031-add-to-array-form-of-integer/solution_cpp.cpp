class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=k;
        reverse(num.begin(),num.end());
        
        for(int i=0;i<num.size();i++ )
        {
            int sum=num[i]+carry;
            num[i]=sum%10;
            carry=sum/10;
            
        }
        if(carry!=0)
        {
            while(carry)
            {
                num.push_back(carry%10);
                carry=carry/10;
            }
        }
        reverse(num.begin(),num.end());
        return num;
    }
};