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
    bool isSymmetric(TreeNode* root) {
        TreeNode* a = root->left;
        TreeNode* b = root->right;
        if( (root == nullptr) || (a == nullptr && b == nullptr) )
        return 1;
        return (test(a,b));
    }
private:
        bool test(TreeNode* a, TreeNode* b)
        {
            if(a == nullptr && b == nullptr)
                return true;
            if(a != nullptr && b == nullptr )
                return false;
            if(a == nullptr && b != nullptr)
                return false;
            if(a->val == b ->val)
            {
                return (test(a->left, b->right) && test(a->right, b->left));
            }
            else
                return false;
        }
}; 
