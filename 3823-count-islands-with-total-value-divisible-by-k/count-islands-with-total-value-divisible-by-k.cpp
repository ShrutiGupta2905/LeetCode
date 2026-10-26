class Solution {
public:
    int m, n;
    long long sum(vector<vector<int>>& grid, int r, int c){
        if(r < 0 || c < 0 || r >= m || c >= n || grid[r][c] == 0) return 0;
        long long count = grid[r][c];
        grid[r][c] = 0;
        count += (sum(grid, r - 1, c) + sum(grid, r + 1, c) + sum(grid, r, c - 1) + sum(grid, r, c + 1));
        
        return count;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();
        long long count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] > 0){
                    long long total = sum(grid, i, j);
                    if(total % k == 0) count++;
                }
                
            }
        }
        return count;
    }
};