class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        map<int,bool>ans;
        for (int i = 0; i <arr.size(); ++i) {
            mp[arr[i]]++;
        }
        for (auto i:mp){
            if(ans[i.second]) return false;
            ans[i.second]=1;
        }
        return true;
    }
};
