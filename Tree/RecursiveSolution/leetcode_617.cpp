class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1 && !t2)
            return NULL;
        int v1 = t1 ? t1->val : 0;
        int v2 = t2 ? t2->val : 0;
        TreeNode* root = new TreeNode(v1+v2);
        root->left = mergeTrees(t1 ? t1->left :NULL, t2 ? t2->left : NULL);
        root->right = mergeTrees(t1 ? t1->right : NULL, t2 ? t2->right : NULL);
        return root;
    }
};
