class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int c_0=0,c_1=0,c_2=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) c_0++;
            if(nums[i]==1) c_1++;
            if(nums[i]==2) c_2++;
        }
        
        for(int i=0;i<nums.size();i++){
            if(c_0) {
                nums[i]=0;
                c_0--;
            }
            else if(c_1) {
                nums[i]=1;
                c_1--;
            }
            else if(c_2){
                nums[i]=2;
                c_2--;
            }
        }
        return ;
    }
};
