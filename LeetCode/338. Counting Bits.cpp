class Solution {
public:
    vector<int> countBits(int num) {
        
        vector<int> ans(num+1,1);
        ans[0]=0;
        if(num==0) return ans;
        ans[1]=1;
        if(num==1) return ans;
        ans[2]=1;
        if(num==2) return ans;
        
        int chk = 4;
        int ind = 2;
        for(int i=3;i<=num;i++){         
            
            if( chk>i ){         
                ans[i] = ans[ind]+ans[i-ind];          
            }
            else{
                ind = chk;
                chk*=2;
                ans[i] = 1;
            }
        }
        
        return ans;
        
    }
};