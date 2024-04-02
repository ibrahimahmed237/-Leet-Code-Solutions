class Solution {
public:
    int searchInsert(vector<int>& n, int target) {
        return lower_bound(n.begin(), n.end(), target)- n.begin();
    }
};
