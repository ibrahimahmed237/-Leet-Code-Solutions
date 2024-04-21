class Solution  {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        set<int> st1(nums1.begin(), nums1.end());
        set<int> st2(nums2.begin(), nums2.end());
        vector<int> ans1, ans2;
        
        for(auto it: st1)
            if(st2.find(it) == st2.end()) 
                ans1.push_back(it);
        for(auto it: st2)
            if(st1.find(it) == st1.end()) 
                ans2.push_back(it);

        ans = {ans1, ans2};
        return ans;
    }
};
