class Solution {
public:
    int binarya(vector<int>nums, int start, int end, int t){
        int md;
        while (start <= end){
            md= start + (end - start) / 2;
            if(nums[md] == t)
                return md;

            else if(nums[md] < t)
                start= md + 1;

            else
                end= md - 1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1,md;
        while (s < e) {
            md = s + (e - s) / 2;
            if (nums[md] > nums[e]) {
                s = md + 1;
            } else {
                e = md;
            }
        }

        if (target >= nums[s] && target <= nums[nums.size() - 1])
            return binarya(nums, s, nums.size() - 1, target);

        return binarya(nums, 0, s - 1, target);

    }
};
