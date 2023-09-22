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
    void func(TreeNode* root, int &ans, int length) {
        if(!root) return;
        if (root->left == NULL && root->right == NULL) {
            ans = min(ans, length);
        }
        func(root->left, ans, length+1);
        func(root->right, ans, length+1); 

    }
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int ans = INT_MAX;
        func(root, ans, 0);
        return ans+1;
    }
};