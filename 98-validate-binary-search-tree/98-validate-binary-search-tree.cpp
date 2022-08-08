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
bool  valid(TreeNode* root,TreeNode*rMin,TreeNode* lMax){
        if(root==NULL) return true;
        
        if(rMin!=NULL && root->val <= rMin->val){
            return false;
        }
        if(lMax!=NULL && root->val >= lMax->val){
            return false;
        }
        
        return valid(root->left,rMin,root) && valid(root->right,root,lMax);
    }
    bool isValidBST(TreeNode* root) {
        return  valid(root,NULL,NULL);
    }
};