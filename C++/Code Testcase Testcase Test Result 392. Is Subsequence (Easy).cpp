class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty()) return true;
        int i = 0, j = 0;
        while (i < s.size() and j < t.size()) {
            if (s[i] == t[j])i++;
            j++;
        }
        return (i == s.size());
    }
};
