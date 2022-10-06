/*Problem:Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.*/
class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j,int n,int m,vector<vector<bool>> &vis){
        if(i<0 || i>m-1 || j<0 || j>n-1 || grid[i][j]=='0' || vis[i][j]==true) return;
        vis[i][j]=true;
        dfs(grid,i-1,j,n,m,vis);
        dfs(grid,i+1,j,n,m,vis);
        dfs(grid,i,j-1,n,m,vis);
        dfs(grid,i,j+1,n,m,vis);
        
        
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' and vis[i][j]==false){
                    dfs(grid,i,j,n,m,vis);
                    count++;
                }
            }
        }
        return count;
        
        
    }
};