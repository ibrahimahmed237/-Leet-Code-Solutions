class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n = s.size() - 1, end = 0;
        while (s[n] == ' ') n--;
        while (s[end] == ' ') end++;
        string tmp;
        for (int i = n; i >= end; i--) {
            if (s[i] != ' ') {
                tmp.push_back(s[i]);
            } else if (s[i] == ' ' and s[i - 1] != ' ') {
                reverse(tmp.begin(), tmp.end());
                ans += tmp + " ";
                tmp = "";
            }
        }
        reverse(tmp.begin(), tmp.end());
        ans += tmp;
        return ans;
    }
};
