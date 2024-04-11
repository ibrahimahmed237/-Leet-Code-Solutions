class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        vector<int>e;
        v.emplace_back(e);
        v[0].emplace_back(1);
        if(numRows==1){
            return v;
        }
        v.emplace_back(e);
        v[1].emplace_back(1);
        v[1].emplace_back(1);
        for (int i = 2; i <numRows ; ++i) {
            v.emplace_back(e);
            v[i].emplace_back(1);
            for(int j=0;j<v[i-1].size()-1;j++) {
                v[i].emplace_back(v[i-1][j]+v[i-1][j+1]);
            }
            v[i].emplace_back(1);
        }
        return v;
    }
};
