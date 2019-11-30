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
        if(!root)
            return res;
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            Node* child = st.top();
            st.pop();
            if(child)
                res.push_back(child->val);
                for(int i = child->children.size() - 1; i >= 0 ; i--){
                    st.push(child->children[i]);
                }
        }
        return res;
    }
};
