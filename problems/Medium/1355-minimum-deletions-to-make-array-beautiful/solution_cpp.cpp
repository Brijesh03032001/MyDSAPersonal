class Solution {
public:
    int minDeletion(vector<int>& nums) {
        
        int deletion(0), n(size(nums));
        
        for (int i=0; i<n-1; ) {
            int newIndex = i-deletion; // index will alter by number of deletions done.
            if ((newIndex % 2 == 0) and nums[i] == nums[i+1])   deletion++;
            else    i++;
        }
        return ((n-deletion) % 2 == 0) ? deletion : deletion+1;
        // if size of array after removing satisfying 2nd condition is odd then we need to delete one more element to make it even.
    }
};