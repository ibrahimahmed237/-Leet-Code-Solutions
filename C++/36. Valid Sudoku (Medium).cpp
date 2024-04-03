class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i) {
            bool v[9]={0};
            for (int j = 0; j < 9; ++j) {
                if(board[i][j]!='.'){
                    if(v[board[i][j]-'1']){
                        return false;
                    }
                    else v[board[i][j]-'1'] = true;
                }
            }
        }
        for (int i = 0; i < 9; ++i) {
            bool v[9]={0};
            for (int j = 0; j < 9; ++j) {
                if(board[j][i]!='.'){
                    if(v[board[j][i]-'1']){
                        return false;
                    }
                    else v[board[j][i]-'1'] = true;
                }
            }
        }
        int n=0,m=0;
        for (int i = 0; i < 9; ++i)
        {
            bool find[9]={false};

            if(i%3==0&&i!=0)
            {
                m += 3;
                n=0;
            }
            else if(i!=0)
            {
                n+=3;
            }
            for (int j = n; j <n+3 ; ++j)
            {
                for (int k = m; k <m+3 ; ++k)
                {
                    if(board[j][k]!='.')
                    {
                        if (find[board[j][k] - '1'])
                            return false;
                        else
                            find[board[j][k] - '1'] = true;
                    }
                }
            }
        }
        return true;

    }
};
