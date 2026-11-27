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
    int minDepth(TreeNode* root) {
        if( root==nullptr){
            return 0;
        }
         int leftside = minDepth( root->left);
         int rightside = minDepth(root->right );

         if( root->left == nullptr) return rightside +1 ;
         if( root->right == nullptr) return leftside +1;
         return min( leftside, rightside )+1;
    }
};