class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        // if starting or ending cell is blocked then return -1
        if (grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;

        queue<pair<int, int>> q;
        q.push(make_pair(0,0)); // insert the starting cell
        vector<vector<int>> directions = {{1,1}, {0,1},{1,0},{0,-1},{-1,0},{-1, -1},{1, -1},{-1, 1}};
        grid[0][0] = 1; // initially  1 step (answer includes the starting cell)

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;

            // if destination already reached then return curr grid cell value
            if( row == n -1 && col == n -1)
                return grid[row][col];

            // iterate for all 8 directions
            for(auto direction : directions){
                int nrow = row + direction[0];
                int ncol = col + direction[1];

                // check for valid direction and no obstacle condition
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && grid[nrow][ncol] == 0){
                    q.push(make_pair(nrow,ncol));
                    grid[nrow][ncol] = grid[row][col] + 1; // increase value for that cell
                }
            }

            // remove the current row,col from queue as it has been processed completely
            q.pop(); 
        }

        // if destination not reached
        return -1;
    }
};
