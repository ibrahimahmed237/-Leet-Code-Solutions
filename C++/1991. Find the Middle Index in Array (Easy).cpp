class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sz = nums.size();
        for (int i = 1; i < sz; ++i) {
            nums[i] += nums[i - 1];
        }
        if (!(nums[sz - 1] - nums[0])) return 0;
        for (int i = 0; i < sz - 1; ++i) {
            if (nums[i] == nums[sz - 1] - nums[i + 1])
                return i + 1;
        }
        return -1;
    }
};
