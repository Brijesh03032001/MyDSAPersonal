class Solution {
public:
    int numberOfSteps(int num) {
      int c=0;
        if(num%2!=0)
        {
          c++;;
        }
        while(num>1)
        {
          c++;
          int le= num/2;
          cout<<le;
          if(le%2!=0)
          {
            c++;
          }
          cout<<"**"<<c;
          num=le;
        }
      
      return c;
    }
};