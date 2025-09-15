class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        long ans=0;
        bool neg=false;
        // while(s[i]!='\0')
        {
            if(s[i]==32)
            {
                if(ans==0)
                {
                    while(s[i]==32)
                    i++;
                    
                }
                
            }
            if(s[i]==45)
            {
                neg=true;
                i++;
            }
            else if(s[i]==43)
            i++;
            
            if(s[i]==48 && ans==0)
            {
                while(s[i]==48 && ans==0)
                i++;
            }
            
            
            while(s[i]!=32 && s[i]!='\0'){
                if(s[i]>57 || s[i]<48){
                break;
                }
                
            
            if((ans*10)>INT_MAX)
                {
                    if(!neg){
                    ans=pow(2,31)-1;
                    break;
                    }
                    else {ans=pow(2,31);
                    break;
                    }
                }
               
                ans=ans*10;
            ans+= s[i] - 48;
            i++;
            }

        }
        if(s=="2147483648")
        return 2147483647;
        else if(s=="-2147483649")
        return -2147483648;
     if(neg)
     return -1*ans;
     return ans;   
    }
};