class Solution {
public:
    int firstUniqChar(string s) {
        
        map <char , int> mp;
        //mp[s[0]] = 1;
        for(int i=0; i<s.size(); i++){
            
            if(mp[s[i]] == 0){
                mp[s[i]] = i+1;
            }else
                mp[s[i]] = -1;
        }
        
        int min = INT_MAX;
        
        for(auto x : mp){
            if(x.second != -1 and x.second-1 < min){
                min = x.second-1;
            }     
        }
        
       
        return min == INT_MAX ? -1 : min;
    }
};