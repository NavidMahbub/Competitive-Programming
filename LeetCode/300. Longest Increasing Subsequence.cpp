class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
    vector<int> ans (nums.size(),1);
    int mx=1;
        
    for(int j=1;j<nums.size(); j++)
    {
        for(int i=0;i<j;i++){
            
            if(nums[i]<nums[j]){
                ans[j] = max(ans[j],1 + ans[i]);
                if(mx<ans[j]) mx= ans[j];
            }
        }
    }     
        return mx;
        
    }
};