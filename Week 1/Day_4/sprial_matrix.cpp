class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {};

        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> result;

        // Direction vectors for Right, Down, Left, Up
        // dr = row changes, dc = column changes
        int dr[] = {0, 1, 0, -1};
        int dc[] = {1, 0, -1, 0};
        
        int r = 0, c = 0; // Robot's starting position
        int dir = 0;      // Starting direction: 0 means Right

        // We know exactly how many elements to collect
        for (int i = 0; i < m * n; i++) {
            // 1. Record the current cell and mark it as visited
            result.push_back(matrix[r][c]);
            matrix[r][c] = 101; // 101 is outside the LeetCode constraint of [-100, 100]

            // 2. Calculate the next potential step
            int next_r = r + dr[dir];
            int next_c = c + dc[dir];

            // 3. Check if the next step is a wall OR an already visited cell
            if (next_r < 0 || next_r >= m || next_c < 0 || next_c >= n || matrix[next_r][next_c] == 101) {
                // Turn 90 degrees clockwise
                dir = (dir + 1) % 4; 
                
                // Recalculate the next step with the new direction
                next_r = r + dr[dir];
                next_c = c + dc[dir];
            }

            // 4. Actually move the robot to the valid next cell
            r = next_r;
            c = next_c;
        }

        return result;
    }
};