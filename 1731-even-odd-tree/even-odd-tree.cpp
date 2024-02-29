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
    bool isEvenOddTree(TreeNode* root) {
        if(!root) return true;
        queue<TreeNode* > qu;
        qu.push(root);
        bool even = true;
        while(!qu.empty()){
            int size = qu.size();
            int previous = even ? INT_MIN : INT_MAX;
            for(int i=0;i<size;i++){
                TreeNode* node = qu.front();
                qu.pop();
                if(even && (node->val%2 == 0 || node->val <= previous)) return false;
                if(!even && (node->val%2 == 1 || node->val >= previous)) return false;
                previous = node->val;
                if(node->left) qu.push(node->left);
                if(node->right) qu.push(node->right);
            }
            even = !even;
        }
        return true;
    }
};