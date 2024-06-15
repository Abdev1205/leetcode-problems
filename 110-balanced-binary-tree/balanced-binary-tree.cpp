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

    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }

        int leftH = height(root->left);
        int rightH = height(root->right);
        int ans = 1+ max(leftH, rightH);
        return ans;

    }
    bool isBalanced(TreeNode* root) {
        // base case 
        if(root==NULL){
            return true;
        }

        // left height
        int leftH =  height(root->left);
        int rightH = height(root->right);
        int diff = abs(leftH-rightH);

        int ans1 = diff<=1;

        int leftAns = isBalanced(root->left);
        int rightAns = isBalanced(root->right);

        if(ans1 && leftAns && rightAns){
            return true;
        }
        
        return false;
        
    }
};