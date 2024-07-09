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

    void getInorder(TreeNode* root , vector<int> &inorder){
        if(root==NULL){
            return;
        }

        // Left
        getInorder(root->left, inorder);
        // get node value and store in vector
        inorder.push_back(root->val);
        // right
        getInorder(root->right,inorder);
    }

    int kthSmallest(TreeNode* root, int k) {
        // Appriach 1 
        // get the inorder value and then return kth value as 1 based indexing
        vector<int> inorder;
        getInorder(root,inorder);

        // return kth value 
        if(k-1>inorder.size()){
            return -1;
        }
        return inorder[k-1];
    }
};