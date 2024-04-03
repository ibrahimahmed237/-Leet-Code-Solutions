class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int ans = 0;
        int sz = flowerbed.size();
        for (int i = 0; i < sz; i++)
        {
            if (!flowerbed[i])
            {
                if (!flowerbed[max(i - 1, 0)] && !flowerbed[min(i + 1, sz - 1)])
                {
                    flowerbed[i] = 1;
                    ans++;
                }
            }
        }
        return ans >= n;
    }
};
