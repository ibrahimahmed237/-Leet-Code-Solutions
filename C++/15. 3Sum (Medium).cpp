class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        int s=n.size()-2;
        sort(n.begin(),n.end());
        vector<vector<int>> v;
        for (int i = 0; i < s; ++i) {
            if(n[i]>0){
                break;
            }
            if(i > 0 && n[i] == n[i-1]){
                continue;
            }
            int l=i+1, r=s+1;
            while ( l < r ){
                long long int sum = n[i]+n[l]+n[r];
                if(sum == 0) {
                    vector<int> q{n[i], n[l], n[r]};
                    v.emplace_back(q);
                     l++,r--; 
                     while (l<r && n[l]==n[l-1]){
                         l++;
                     }
                     while (l<r && n[r]==n[r+1]){
                         r--;
                      }
                } else if (sum < 0){
                    l++;   
                }
                else {
                    r--;
                }
            }
        }
        return v;
    }

};
