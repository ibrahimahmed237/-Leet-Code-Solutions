class Solution {
public:
    bool check(string s, string t) {
        int sSize = s.size(), tSize = t.size();
        int i = 0, j = 0;
        while (i < sSize and j < tSize) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == sSize;
    }

    int findLUSlength(vector<string> &strs) {
        int mxLen = -1, currLEn = -1;
        for (int i = 0; i < strs.size(); ++i) {
            bool ch = 1;
            currLEn = strs[i].size();
            for (int j = 0; j < strs.size(); ++j) {
                if (i != j and check(strs[i], strs[j])) {
                    ch = 0;
                    break;
                }
            }
            if (ch) mxLen = max(mxLen, currLEn);
        }
        return mxLen;
    }
};
