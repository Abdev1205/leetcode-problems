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

    void getInorder(TreeNode* root, vector<int> &inorder){
        if(root==NULL){
            return ;
        }

        // left 
        getInorder(root->left, inorder);
        // store the node value
        inorder.push_back(root->val);
        // right
        getInorder(root->right,inorder);
    }

    bool findTarget(TreeNode* root, int k) {
        // Approach 1 
        // Inorder array and in array then we can use two pointer to find the value
        vector<int> inorder;
        getInorder(root,inorder);

        int start =0;
        int end = inorder.size()-1;
        while(start<end){
            int sum = inorder[start] + inorder[end];
            if(sum==k){
                return true;
            }
            if(sum>k){
                // then we have to search more smaller value 
                // so update the end 
                end--;
            }
            else{
                // then we have to search more bigger value
                // so updatet the start
                start++;
            }
           
        }

        // if above true is not written then 
        // then no pair is found so we have to return false
        return false;
    }
};