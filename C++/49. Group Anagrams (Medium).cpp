class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>m;
        vector<vector<string>>ans;
        for(auto i:strs){
            string r=i;
            sort(r.begin(),r.end());
            m[r].emplace_back(i);
        }
        for(auto i:m){
            ans.emplace_back(i.second);
        }
        return ans;
    }
};
