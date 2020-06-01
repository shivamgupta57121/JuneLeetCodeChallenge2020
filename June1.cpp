// Problem : https://leetcode.com/problems/invert-binary-tree/

// Solution : 

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root) {
            invertTree(root->left);
            invertTree(root->right);
            swap(root->left, root->right);
        }
        return root;
    }
};
