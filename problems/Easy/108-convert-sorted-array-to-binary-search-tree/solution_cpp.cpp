/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
 TreeNode *buildInorder(vector<int> &nums, int i, int j) {
        if (i > j) {
            return nullptr;
        }
        int mid = (i + j) / 2;
        TreeNode *curr = new TreeNode(nums[mid]);
        curr->left = buildInorder(nums, i, mid - 1);
        curr->right = buildInorder(nums, mid + 1, j);
        return curr;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        return buildInorder(nums, 0, nums.size() - 1);
    }
};