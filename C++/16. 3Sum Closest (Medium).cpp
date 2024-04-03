class Solution {
public:
    int threeSumClosest(vector<int> &n, int target) {
        int ans = INT32_MAX, dif = INT32_MAX;
        sort(n.begin() , n.end());
        for (int i = 0 ; i < n.size()-2 ; ++i) {
            int r=i+1, l= n.size()-1;
            while (r<l){
                int sum = n[i]+n[r]+n[l];
                if(abs(target - sum) < dif ){
                    dif= abs(target - sum);
                    ans =sum;
                }
                if(sum == target){
                    return sum;
                }
                else if(sum > target){
                    l--;
                } else{
                    r++;
                } 
            }
        }
    
        return ans;
    }
};
