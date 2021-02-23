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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(root==NULL) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        int check = 1;
        while(!q.empty()){
            
            vector<int> crntLevel;
            int size = q.size();
            for(int i=0;i<size;i++){
                
                TreeNode* crnt = q.front();
                q.pop();
                
                if(crnt->left!=NULL){
                     q.push(crnt->left);
                }
                if(crnt->right!=NULL){
                    q.push(crnt->right);
                } 
                
                crntLevel.push_back(crnt->val);  
            }
            
            if(check==0){
                check=1;
                reverse(crntLevel.begin(), crntLevel.end());
            }else{
                check = 0;
            }
            ans.push_back(crntLevel);
        }    
        return ans; 
    }
};