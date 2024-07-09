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
            return;
        }

        getInorder(root->left,inorder);
        inorder.push_back(root->val);
        getInorder(root->right,inorder);

    }

    bool isValidBST(TreeNode* root) {
        // Apprioch 1 
        // using in order to get the value
        // if value is sorted so that we will have the valid bst;
        vector<int> inorder;
        getInorder(root,inorder);

        for(auto i:inorder){
            cout<<i<<" ";
        }

        bool isSorted = is_sorted(inorder.begin(),inorder.end());
        auto isDistinct = adjacent_find(inorder.begin(),inorder.end());

        if(isDistinct==inorder.end() && isSorted ){
            return true;
        }

        return false;
    }
};