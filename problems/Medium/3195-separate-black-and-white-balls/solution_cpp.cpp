class Solution {
public:
    long long minimumSteps(string str) {
        int n= str.size();
     long long  p1=-1;
   long long p2=-1;
   long long step =0;
   for(int i=n-1;i>=0;i--)
   {
    if(str[i]=='0')
    {
       p1 = i;
       break;
    }

   }
   p2= p1-1;
//    cout<< "the p1 is" << p1 <<"***\n";
   while(p1>=0 && p2>=0)
   {
    // cout<< "p2 is " << p2 << " and p1 is " << p1 << "\n";
    if(str[p2]=='1')
    {
      step+= (p1-p2);
      p2--;
      p1--;

    }
    else if(str[p2]=='0')
    {

      p2--;
    }
   }
   return step;   
    }
};