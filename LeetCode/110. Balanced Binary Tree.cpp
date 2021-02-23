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
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL) return true;        
        int a = maxl( root->left );
        int b = maxl( root->right );
        
        return abs(a-b)> 1 ? false : isBalanced(root->left) && isBalanced(root->right);
        
    }
    
    
  //  int minl(TreeNode* root){
       // if(root == NULL ) return 0;
      //  else if(root->right==NULL) return  1+minl(root->left); 
       // else if(root->left==NULL) return 1+minl(root->right);
       // else return min(1+minl(root->left),1+minl(root->right));
    //}
    
    int maxl(TreeNode* root){
        if(root == NULL ) return 0;        
        return 1+max(maxl(root->left),maxl(root->right));
    }
};