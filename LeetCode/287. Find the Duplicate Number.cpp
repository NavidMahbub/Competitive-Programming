class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        
        for(int i=0;i<nums.size();i++){
            int id = abs(nums[i]);
            
            if(nums[id]<0)
                ans = id;
            else{
                
                nums[id] = -nums[id];
            }
                
            
        }
        return ans;
    }
};