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

    int findPos(vector<int>& inorder, int k, int n){
        for(int i=0; i<n; i++){
            if(inorder[i]==k){
                return i;
            }
        }
        return -1;
    }

    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int &preIndex, int start,int end){
        int size = preorder.size();
        // base case
        if(preIndex>=size || start>end){
            return 0;
        }

        // step A
        int element = preorder[preIndex++];
        TreeNode* root = new TreeNode(element);
        int nodePos = findPos(inorder,element,size);

        // Step b solve root-Left
        root->left = build(preorder,inorder, preIndex, start,nodePos-1);

        // step c solve root->right
        root->right = build(preorder,inorder,preIndex, nodePos+1,end);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex=0;
        int start=0;
        int end = inorder.size()-1;

        return build(preorder,inorder,preIndex,start,end);
    }
};