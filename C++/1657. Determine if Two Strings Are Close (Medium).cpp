class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> mp1(26, 0);
        vector<int> mp2(26, 0);
        for (auto i: word1) {
            mp1[i - 'a']++;
        }
        for (auto i: word2) {
            mp2[i - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (mp1[i] && !mp2[i] || mp2[i] && !mp1[i])
                return false;
        }
        sort(mp1.begin(), mp1.end());
        sort(mp2.begin(), mp2.end());
        for (int i = 0; i < 26; i++) {
            if (mp1[i] != mp2[i]) {
                return false;
            }
        }
        return true;
    }
};
