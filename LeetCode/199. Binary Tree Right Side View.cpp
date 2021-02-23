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
     vector<int> ans;
public:
    vector<int> rightSideView(TreeNode* root) {
       
        
        return right(root);
    }
    
    public:
        vector<int> right(TreeNode* root){
            if(root==NULL) {
                return ans;
            }
            
            ans.push_back(root->val);
            right(root->right);
            
            return ans;
        }
};