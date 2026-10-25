class Solution {
public:
    int m, n;
    bool dfs(vector<vector<int>>& grid, int r, int c){
        if(r < 0 || c < 0 || r >= m || c >= n) return false;
        if(grid[r][c] == 1) return true;
        grid[r][c] = 1;
        int up = dfs(grid, r - 1, c);
        int down = dfs(grid, r + 1, c);
        int left = dfs(grid, r, c - 1);
        int right = dfs(grid, r, c + 1);
        return up && down && left && right;
    }
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 0){
                    if(dfs(grid, i, j)) count++;
                }
            }
        }
        return count;
    }
};