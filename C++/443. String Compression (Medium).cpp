class Solution {
public:
    int compress(vector<char> &chars) {
        int cnt = 0;
        int sz = chars.size();
        vector<char> ans;
        string tmp = "";
        for (int i = 1; i < sz; ++i) {
            if (chars[i] == chars[i - 1])cnt++;
            else {
                ans.push_back(chars[i - 1]);
                if (cnt) tmp = (to_string(cnt + 1));
                else tmp = "";
                for (auto ch: tmp)ans.push_back(ch);
                cnt = 0;
            }
        }
        ans.push_back(chars[sz - 1]);
        if (cnt) tmp = (to_string(cnt + 1));
        else tmp = "";
        for (auto ch: tmp)ans.push_back(ch);
        
        chars = ans;
        return ans.size();
    }
};
