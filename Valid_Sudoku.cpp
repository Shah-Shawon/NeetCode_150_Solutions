class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;i++){
            unordered_set<char>mp;
            for(int j=0;j<9;j++){
                char ch = board[i][j];
                if(ch=='.')    continue;
                if(mp.count(ch))    return false;
                mp.insert(ch);
            }
        }

        for(int i=0;i<9;i++){
            unordered_set<char>mp;
            for(int j=0;j<9;j++){
                char ch = board[j][i];
                if(ch=='.')    continue;
                if(mp.count(ch))    return false;
                mp.insert(ch);
            }
        }

        for(int cnt=0;cnt<9;cnt++){
            unordered_set<char>mp;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    int row = (cnt/3)*3+i;
                    int col = (cnt%3)*3+j;
                    char ch = board[row][col];
                    if(ch=='.')    continue;
                    if(mp.count(ch))    return false;
                    mp.insert(ch);
                }
            }
        }
        return true;
    }
};
