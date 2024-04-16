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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* node = new TreeNode(val);
            node->left = root;
            return node;
        }

        queue<TreeNode* > qu;
        qu.push(root);

        int cnt = 0;
        while(!qu.empty()){
            int size = qu.size();
            cnt++;
            for(int i=0;i<size;i++){
                TreeNode* node = qu.front();
                qu.pop();

                if(cnt != depth-1){
                    if(node->left) qu.push(node->left);
                    if(node->right) qu.push(node->right);
                }else{
                    TreeNode* newNodeL = new TreeNode(val);
                    newNodeL->left = node->left;
                    node->left = newNodeL;

                    TreeNode* newNodeR = new TreeNode(val);
                    newNodeR->right = node->right;
                    node->right = newNodeR;
                }
            }
        }
        return root;
    }
};