class Solution {
public:
    string compressedString(string word) {
        char pre = word[0];
        int temp=1;
        string res ="";
        int flag = 0;
        for(int i=1;i<word.size();i++)
        {
            while(i<word.size() && word[i]== pre )
            {
                temp++;
                if(i==word.size()-1)
                {
                    flag = 1;
                }
                if(temp==10)
                {
                     res += to_string(9);
                     res +=  pre;
                     temp = 1;

                }
                i++;
                
            }

            res += to_string(temp);
            res +=  pre;
            temp=1;
            if(i<word.size()){

                     pre = word[i];
            }   
            
        }
        if(flag == 0)
        {
             res += to_string(temp);
                     res +=  pre;
        }
        
        return res;
    }
};