/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    public:
        bool judge(TreeNode *leftNode, TreeNode *rightNode) {
            if (leftNode == NULL && rightNode == NULL ) return true;
            if (leftNode == NULL || rightNode == NULL ) return false;
            if (leftNode->val != rightNode->val) return false;
            return judge(leftNode->left, rightNode->right) && judge(leftNode->right, rightNode->left);
        }
        bool isSymmetric(TreeNode *root) {
            if (root == NULL) return true;
            return judge(root->left, root->right);
        }
};
