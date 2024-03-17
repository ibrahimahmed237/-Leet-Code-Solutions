class Solution {
public:
    int addDigits(int num) {
        string s = to_string(num);
        int ans = 10;
        while (ans >= 10) {
            ans = digitsSum(s);
            s = to_string(ans);
        }
        return ans;
    }

private:
    int digitsSum(string s) {
        int sum = 0;
        for (auto i: s) {
            sum += i - '0';
        }
        return sum;
    }
};