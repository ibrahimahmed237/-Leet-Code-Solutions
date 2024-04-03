class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        int mxProfit = 0, leftMin = prices[0];
        vector<int> l(n, 0), r(n, 0);
        for (int i = 1; i < n; ++i) {
            leftMin = min(leftMin, prices[i]);
            mxProfit = max(mxProfit, prices[i] - leftMin);
            l[i] = max(l[i - 1], mxProfit);
        }

        mxProfit = 0;
        int RightMax = prices[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            RightMax = max(RightMax, prices[i]);
            mxProfit = max(mxProfit, RightMax - prices[i]);
            r[i] = max(r[i + 1], mxProfit);
        }

        int allProfit = 0;
        for (int i = 0; i < n; ++i) {
            allProfit = max(allProfit, r[i] + l[i]);
        }

        return allProfit;
    }
};
