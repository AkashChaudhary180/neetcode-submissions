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
    vector<int> a;
    void inorder(TreeNode* root){
        if(root==nullptr) return;

        inorder(root->left);
        a.push_back(root->val);
        inorder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);

        priority_queue<int> pq;

        for(auto it : a){
            pq.push(it);
            if(pq.size()>k) pq.pop();
        }

        return pq.top();
    }
};
