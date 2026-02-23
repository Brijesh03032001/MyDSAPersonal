class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        int t=totalTrips;
       long long int s=1;
       long long int e=1e14;
        int ans= INT_MAX;
        
        while(s<e)
        {
            long long int mid= (s+e)/2;
            long long su=0;
               for(int i=0;i<time.size();i++)
               {
                   su+= ((mid)/time[i]);
               }
            
            
        if(su>=t)
            {
                //ans= min(ans,mid);
                e=mid;
            }
            else
            {
                s=mid+1;
                
            }
        }
     return e;   
    }
};