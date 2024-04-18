class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int prev = 0, max_length = 0, curr = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (!nums[i]) {
                max_length = max(max_length, prev + curr);
                prev = curr;
                curr = 0;
            } else  curr++;     
        }
        if (curr == nums.size()) {
            return curr - 1;
        }
        
        max_length = max(max_length, prev + curr);
        return max_length;
    }
};
