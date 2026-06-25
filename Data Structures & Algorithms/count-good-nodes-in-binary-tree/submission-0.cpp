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

    int good(TreeNode* root,int maxi){
        if(root==nullptr) return 0;
        if(root->val>=maxi) maxi = root->val;

        int leftg = good(root->left,maxi);
        int rightg = good(root->right,maxi);

        if(root->val>=maxi){
            return 1+leftg+rightg;
        }

        return leftg+rightg;
    }
    int goodNodes(TreeNode* root) {
        return good(root,root->val);
    }
};
