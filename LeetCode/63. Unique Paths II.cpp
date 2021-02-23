class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        
        
        vector<vector<int>> ans;
        int a;
        
        for(int i=0; i<grid.size(); i++){
            vector<int> tmp;
            for(int j=0;j<grid[i].size();j++){
                if(i==0 or j==0){
                    if(grid[i][j]==1) tmp.push_back(0);
                    else{
                        tmp.push_back(1);
                    }
                }
                else{
                    if(grid[i][j]==1) tmp.push_back(0);
                    else{
                        a = tmp[j-1]+ans[i-1][j];
                        tmp.push_back(a);
                    }
                }
            }                      
            ans.push_back(tmp);
        }
        return a;
    }
};
