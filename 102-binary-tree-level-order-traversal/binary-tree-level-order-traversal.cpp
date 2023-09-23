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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode *> qu;
        if(!root) return ans;
        qu.push(root);
        while(!qu.empty()) {
            int size = qu.size();
            vector<int> lvl;
            for(int i=0;i<size;i++) {
                TreeNode *node = qu.front();
                qu.pop();
                if(node->left) qu.push(node->left);
                if(node->right) qu.push(node->right);
                lvl.push_back(node->val);
            }
            ans.push_back(lvl);
        }
        return ans;
    }
};