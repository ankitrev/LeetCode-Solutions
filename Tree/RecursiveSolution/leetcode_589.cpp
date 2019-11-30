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
    vector<int> preorder(Node* root) {
        vector<int> res;
        preorder_traversal(res,root);
        return res;
    }
    void preorder_traversal(vector<int>& res, Node* root){
        if(root){
           res.push_back(root->val);
            for(auto i = 0; i < root->children.size(); i++){
                preorder_traversal(res,root->children[i]);
            } 
        }
    }
};
