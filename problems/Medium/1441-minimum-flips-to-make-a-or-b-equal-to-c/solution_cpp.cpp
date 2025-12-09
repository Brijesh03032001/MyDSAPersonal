class Solution {
public:
    string intToBinaryString(int number) {
  
    bitset<32> binary(number);
    string binaryString = binary.to_string();
    
    
    return binaryString;
}

    int minFlips(int a, int b, int c) {
       string str1 = intToBinaryString(a);
        string str2 = intToBinaryString(b);
        string str3 = intToBinaryString(c);
        
        int co=0;
        for(int i=0;i<32;i++)
        {
            if(str3[i]=='1' && (str1[i]=='0' && str2[i]=='0')) {co++;}
             if (str3[i]=='0' && (str1[i]=='1' || str2[i]=='1')) {
                 co++;
                 if(str1[i]=='1' && str2[i]=='1') co++;
             }
              
            
        }
        return co;
        
    }
};