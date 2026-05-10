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
    int goodNodes(TreeNode* root) {
        int res = 0;
        if(!root) return 0;
        checkForGood(root, root->val,res);
        return res;
    }

    void checkForGood(TreeNode* p, int maxVal, int &res){
        if(!p) return;
        if(p->val >= maxVal){
            res++;
        }
        int newMax = max(maxVal, p->val);
        checkForGood(p->left, newMax,res);
        checkForGood(p->right, newMax,res);
    }
};

//         3
//     3       null
//  4    2 
