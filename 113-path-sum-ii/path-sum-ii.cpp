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

    void findPath(TreeNode* root,vector<vector<int>> &ans,vector<int> path,int cSum,int tSum){
        if(root==NULL){
            return;
        }

        // leaf node then check that sum equals to tSum or not
        if(root->left==NULL && root->right==NULL){
            // update the vector and add value to sum
            path.push_back(root->val);
            cSum+=root->val;
            
            // check the leaf node
            if(tSum==cSum){
                ans.push_back(path);
            }
        }

        // adding val in vector and updating the cSUm
        path.push_back(root->val);
        cSum+=root->val;

        // check for left part
        findPath(root->left,ans,path,cSum,tSum);
        findPath(root->right,ans,path,cSum,tSum);

    }

    vector<vector<int>> pathSum(TreeNode* root, int tSum) {
        vector<vector<int>> ans;
        vector<int> path;
        int cSum;
        findPath(root,ans,path,cSum,tSum);
        return ans;

    }
};