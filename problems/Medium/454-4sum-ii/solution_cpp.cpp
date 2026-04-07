class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int, int> sum1,sum2;
        
        for(int i=0; i < nums1.size(); i++) {            
            for(int j=0; j < nums2.size(); j++) {                
                sum1[nums1[i] + nums2[j]]++;
            }
        }
        
        for(int i=0; i < nums3.size(); i++) {            
           for(int j=0; j < nums4.size(); j++) {                
                sum2[nums3[i] + nums4[j]]++;
            }
        }
        
        int result=0;
        for(auto& item : sum1) {         
            if (sum2.find(item.first * -1) != sum2.end()) {
                result += item.second * sum2[item.first * -1];
            }
        }        
        return result;
    }
};