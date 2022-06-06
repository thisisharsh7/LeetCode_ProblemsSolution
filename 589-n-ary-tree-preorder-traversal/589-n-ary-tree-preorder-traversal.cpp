/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void getPreorder(Node*root, vector<int> &ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
         for (int i = 0; i < root->children.size(); i++) {
            getPreorder(root->children[i], ans);
        }
        
    }
    
    vector<int> preorder(Node* root) {
        vector<int> ans;
        getPreorder(root,ans);
        return ans;
    }
};