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

    int maxDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }

        int leftH = maxDepth(root->left);
        int rightH = maxDepth(root->right);
        int ans = 1+ max(leftH,rightH);
        return ans;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }

        // finding answer in left 
        int leftTree = diameterOfBinaryTree(root->left);

        // finding answer in right tree
        int rightTree = diameterOfBinaryTree(root->right);

        // commbing node and left tree and right with root
        int combinedLeftRight = maxDepth(root->left) + maxDepth(root->right);

        // now findig max between them and returing at back
        int ans = max(leftTree, max(rightTree,combinedLeftRight));
        return ans;
    }
};