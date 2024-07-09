/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // here 4 case will be there
        // case 1 if p and q data both are less than root 
        // then answer will lie in left sub tree
        if(p->val < root->val && q->val < root->val ){
            // search in left sub tree
            return lowestCommonAncestor(root->left, p, q);
        }
        // case 2 if p and q both are greater than root 
        // so search in right sub tree
        else if(p->val > root->val && q->val > root->val){
            // search in right sub tree
            return lowestCommonAncestor(root->right, p, q);
        }
        // case 3 if p < root but  q > root 
        // search p in left and q in right
        else if(p->val < root->val && q->val > root->val  ){
            return root;
        }
        // case 3 if p > root but  q < root 
        // search p in right and q in left
        else if(p->val > root->val && q->val < root->val){
            return root;
        }

        return root;
    }
};