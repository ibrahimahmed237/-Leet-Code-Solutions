class Solution {
public:
    int equalPairs(vector<vector<int>> &grid) {
        int ans = 0;
        bool ch = 0;
        vector<vector<int>> tmp(grid.size());
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                tmp[i].push_back(grid[j][i]);
            }
        }
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < tmp.size(); ++j) {
                if (grid[i] == tmp[j])ans++;
            }
        }
        return ans;
    }
};
