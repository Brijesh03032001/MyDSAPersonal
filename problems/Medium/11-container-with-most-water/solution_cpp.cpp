class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int p2= height.size()-1;
        int p1=0;
        while(p2>p1)
        {
            res = max(res, (p2-p1)*min(height[p2],height[p1]));
            if(height[p1] > height[p2])
            {
                p2--;
            }
            else
            {
                p1++;
            }
        }
        return res;
    }
};