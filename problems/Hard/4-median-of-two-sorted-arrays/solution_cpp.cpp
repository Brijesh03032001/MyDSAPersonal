class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size();
        int l2=nums2.size();
        int i;
        double su;
        for(i=0;i<l2;i++)
        {
            nums1.push_back(nums2[i]);
            
            
        }
        sort(nums1.begin(),nums1.end());
        int ne=nums1.size();
        double de=double(ne)/2;
        int de1=ne/2;
       if(ne%2==0)
       {
           su=double(nums1[de1]+nums1[de1-1])/2;
       }
        else
        {
            su=double(nums1[de1]);
        }
        return su;
    }
};