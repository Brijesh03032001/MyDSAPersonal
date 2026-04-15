class Solution {
public:
    int maxArea(vector<int>& height){
        int p1= 0;
        int n = height.size();
        int p2= n-1;
        int ans = INT_MIN;
        while(p1 < p2)
        {
            int ref = min(height[p1],height[p2]);
            ans = max(ans, ref*(p2-p1));
            if(ref == height[p1] && ref!= height[p2])
            {
                p1++;
            }
            else if(ref == height[p2] && ref!=height[p1])
            {
                p2 --;
            }
            else if(height[p1] == height[p2])
            {
                p2--;
                p1++;
               
            }

            
        }
        return ans;
    }
};