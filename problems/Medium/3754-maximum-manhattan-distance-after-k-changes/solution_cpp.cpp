class Solution {
public:
    int help_two(string s)
    {
        int x= 0;
        int y =0;
        int mx = 0;
        for(auto i : s)
        {
            if(i=='N')
            {
                y++;
            }
            else if(i == 'S')
            {
                y--;
            }
            else if(i=='E')
            {
                x++;

            }
            else if(i =='W')
            {
                x--;
            }

            mx = max(mx , abs(x)+ abs(y));
        }
        return mx;
    }
    string help_one(char a, char b , string s, int k , char c, char d)
    {
        
      for(int i=0;i< s.size();i++)  
     {      
                  if( s[i] == c && k> 0)
                  {
                           s[i] = a;
                           k--;
                  }
                  else if( s[i] == d && k> 0)
                  {
                           s[i] = b;
                           k--;
                  }
    }

            
            return s;
        
    }
    int maxDistance(string s, int k) {

         vector<pair<char,char>> vc {
            {'N', 'E'},
            {'N', 'W'},
            {'S', 'E'},
            {'S', 'W'},
            
         } ;
         int ans = INT_MIN;
         for(auto it: vc)
         {
            char c, d;
            if(it.first == 'N' && it.second =='E')
            {
                 c = 'S';
                  d = 'W';
            }
            else if(it.first == 'N' && it.second =='W')
            {
                 c = 'S';
                  d = 'E';
            }
            else if(it.first == 'S' && it.second =='E')
            {
                 c = 'N';
                  d = 'W';
            }
            else if(it.first == 'S' && it.second =='W')
            {
                 c = 'N';
    
    
                  d = 'E';
            }
         string fin = help_one(it.first, it.second , s , k, c ,d);
         ans  = max(ans, help_two(fin));

         }

         return ans;
         
    }
};