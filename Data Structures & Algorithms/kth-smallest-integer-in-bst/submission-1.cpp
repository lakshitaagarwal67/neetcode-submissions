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
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return 0;
        TreeNode* node = root;
        TreeNode* temp =  dfs(node,k);
        return temp->val;
    }

    TreeNode* dfs(TreeNode* &node, int &k){
        if(!node) return nullptr;        
        TreeNode* nodel = dfs(node->left,k);
        k--;
        if(k == 0) return node;
        TreeNode* noder = dfs(node->right,k);                        
        if(nodel) return nodel;
        if(noder) return noder;        
        return nullptr;
    }

};
