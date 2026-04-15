class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int st= n-1;
        for(int i=n-1;i>=1;i--)
        {
            if(nums[i] > nums[i-1])
            {
                st = i-1;
                break;
            }
        }
       
        if(st == n-1){
            sort(nums.begin(), nums.end());
            return ;
        }
        cout << st;
        vector<int> ref(nums.begin()+st+1, nums.end());
        int r = nums[st];
        int mi = nums[st+1];
        int mi_index = st+1;
        for(int i=0;i<ref.size();i++)
        {
            cout << ref[i];
            if(ref[i] > r && mi>=ref[i])
            {
                mi = ref[i];
                mi_index= st+1+i;
            }
        }
        swap(nums[st] , nums[mi_index]);
        sort(nums.begin()+ st + 1, nums.end());
        
        return ;

    }
};