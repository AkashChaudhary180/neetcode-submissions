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
    bool bal(TreeNode* root){
        if(root==nullptr) return true;

        if(bal(root->left) && bal(root->right) && abs(height(root->right)-height(root->left))<=1) return true;

        return false;
    }
    int height(TreeNode* root){
        if(root==nullptr) return 0;

        return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
          
          return bal(root);

        
    }
};
