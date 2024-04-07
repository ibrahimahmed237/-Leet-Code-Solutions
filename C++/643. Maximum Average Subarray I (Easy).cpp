class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0, avg=INT_MIN;
        for(int i=0;i<k;i++) {
            sum+= nums[i];
        }
        avg = max (avg, (sum / k) );
        int n = nums.size(), p = 0;
        for(int i=k;i<n;i++) {
            sum += nums[i];
            sum -= nums[p++];
            avg = max(avg, (sum/k) );
        }
        return avg;
    }
};
