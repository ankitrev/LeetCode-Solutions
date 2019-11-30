class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        inorder(root,L,R,sum);
        return sum;
    }
    void inorder(TreeNode* root, int L, int R, int& sum){
        if(root){
            if(root->val >= L && root->val <= R)
                sum += root->val;
            inorder(root->left,L,R,sum);
            inorder(root->right,L,R,sum);
        }
    }
};
