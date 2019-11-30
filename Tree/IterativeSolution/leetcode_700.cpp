With Stack:

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)
            return NULL;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();
            if(temp == NULL)
                return NULL;
            else if(val == temp->val)
                return temp;
            else if(val < temp->val)
                st.push(temp->left);
            else
                st.push(temp->right);
        }
        return NULL;
    }
};

Without Stack:

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root != nullptr && root->val != val){
            root = (root->val > val) ? root->left : root->right;
        }
        return root;
    }
};
