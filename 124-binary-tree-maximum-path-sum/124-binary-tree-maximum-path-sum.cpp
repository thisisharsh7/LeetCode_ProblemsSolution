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
    int maxPathSum(TreeNode* root) {
        int m=INT_MIN;
        maxPathDown(root,m);
        return m;
    }
    int maxPathDown(TreeNode* node,int &ma){
        if(node==NULL){
            return 0;
        }
        int l=max(0,maxPathDown(node->left,ma));
        int r=max(0,maxPathDown(node->right,ma));
        ma=max(ma,l+r+node->val);
        return max(l,r) + node->val;
    }
};