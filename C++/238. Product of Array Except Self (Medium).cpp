class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        int multi = 1;
        int sz = nums.size();
        vector<int> ans(sz, 0);
        int ch = 0;
        for (int i = 0; i < sz; ++i) {
            if (nums[i])
                multi *= nums[i];
            else ch++;
        }
        if (ch) {
            if (ch > 1) return ans;
            for (int i = 0; i < sz; ++i) {
                if (!nums[i])
                    ans[i] = multi;
            }
        } else {
            for (int i = 0; i < sz; ++i) {
                ans[i] = multi / nums[i];
            }
        }
        return ans;
    }
};
