class Solution
{
public:
    string reverseVowels(string s)
    {
        string vowels = "aeiouAEIOU", v = "";
        int sz = s.size();
        for (int i = 0; i < sz; i++)
        {
            if (vowels.find(s[i]) != string::npos)
            {
                v += s[i];
            }
        }
        for (int i = 0; i < sz; i++)
        {
            if (vowels.find(s[i]) != string::npos)
            {
                s[i] = v.back();
                v.pop_back();
            }
        }  
        return s;
    }
};
