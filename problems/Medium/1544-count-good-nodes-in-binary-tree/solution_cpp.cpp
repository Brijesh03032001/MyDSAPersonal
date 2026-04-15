#pragma GCC optimize("O3,unroll-loops,fast-math")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,abm")

static const auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
/*

Above lines of code enable maximum compiler optimizations (O3, loop 
unrolling, fast-math) and CPU-specific instructions (AVX2, 
BMI) to speed up execution, while the I/O tweaks 
(sync_with_stdio(false)) reduce overhead for faster input/
output operations in competitive programming. Together, 
they minimize runtime by optimizing both computation and I/O.

*/
class Solution {
public:
 int goodNodes(TreeNode* root,int maxVal=INT_MIN) {
        if(!root)return 0;
        
        maxVal=max(maxVal,root->val);
       int l= goodNodes(root->left,maxVal);
       int r=  goodNodes(root->right,maxVal);
        if(root->val>=maxVal) return l+r+1;
        return l+r;
    }
   
};