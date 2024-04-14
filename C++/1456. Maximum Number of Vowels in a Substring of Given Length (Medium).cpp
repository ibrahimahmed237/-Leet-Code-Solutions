class Solution {
public:
    int maxVowels(string s, int k) {
        string vowels = "aeiouAEIOU";
        int mx = 0,tmp=0;
        for (int i = 0; i < s.size(); ++i) {
            if (vowels.find(s[i]) != string::npos) {
                tmp++;
            }
            if (i >= k) {
                if (vowels.find(s[i - k]) != string::npos)tmp--;
            }
            mx = max(tmp, mx);
        }
        mx = max(tmp, mx);
        return mx;
    }
};
