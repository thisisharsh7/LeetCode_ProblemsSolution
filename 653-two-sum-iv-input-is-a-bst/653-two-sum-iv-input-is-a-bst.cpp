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
    unordered_map<int, int>  um;
    bool findTarget(TreeNode* root, int k) {
        um.clear();
        return search(root, k);
    }

    bool search(TreeNode *root, int k) {
        if (!root) return false;
        if  (um.find(k - root->val) != um.end())
        { 
            return true;
        }
        um[root->val]++;
        return search(root->left, k) || search(root->right, k);
    }
};