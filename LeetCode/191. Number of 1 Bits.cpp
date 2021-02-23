class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int cnt = 0;
       
        while( n!=0 ){
            
            int rs = 1 & n;
            if(rs == 1){
                cnt++;
            }
            
            n = n>>1; 
        }        
        return cnt;
    }
};