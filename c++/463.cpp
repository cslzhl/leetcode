class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int row = grid.size();
        int col = grid[0].size();
        int sum = 0;
        for(int i=0; i< row;++i)
            for(int j=0; j< col;++j)
                sum+= countPermeter(grid,i,j);
        return sum;
    }
    int countPermeter(vector<vector<int>>& grid,int i,int j){
        if(grid[i][j]==0) return 0;
        int count = 4;
        if(i>0&&grid[i-1][j]==1) --count;
        if(i<grid.size()-1&&grid[i+1][j]==1) --count;
        if(j>0&&grid[i][j-1]==1) --count;
        if(j<grid[0].size()-1 && grid[i][j+1]==1) --count;
        return count;
    }
};
