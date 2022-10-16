#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> v;
        set<char> s;

        for(int i =0;i<9;i++){
            for(int j = 0;j<9;j++){
                if(board[i][j]!='.'){
                    v.push_back(board[i][j]);
                    s.insert(board[i][j]);
                }
            }
            
            if(v.size()!=s.size())return false;
            v.clear();
        s.clear();
        }
        v.clear();
        s.clear();

        for(int i =0;i<9;i++){
            for(int j = 0;j<9;j++){
                if(board[j][i]!='.'){
                    v.push_back(board[j][i]);
                    s.insert(board[j][i]);
                }
            }
            
            if(v.size()!=s.size()) return false;
            v.clear();
        s.clear();
        }

        v.clear();
        s.clear();

        for(int i =0;i<3;i++){
            for(int j = 0;j<3;j++){
                if(board[i][j]!='.'){
                    v.push_back(board[i][j]);
                    s.insert(board[i][j]);
                }
            }
        }
        if(v.size()!=s.size()) return false;

        v.clear();
        s.clear();

        for(int i =0;i<3;i++){
            for(int j = 3;j<6;j++){
                if(board[i][j]!='.'){
                    v.push_back(board[i][j]);
                    s.insert(board[i][j]);
                }
            }
        }
        if(v.size()!=s.size()) return false;

        v.clear();
        s.clear();

        for(int i =0;i<3;i++){
            for(int j = 6;j<9;j++){
                if(board[i][j]!='.'){
                    v.push_back(board[i][j]);
                    s.insert(board[i][j]);
                }
            }
        }
        if(v.size()!=s.size()) return false;

        v.clear();
        s.clear();

        for(int i =3;i<6;i++){
            for(int j = 0;j<3;j++){
                if(board[i][j]!='.'){
                    v.push_back(board[i][j]);
                    s.insert(board[i][j]);
                }
            }
        }
        if(v.size()!=s.size()) return false;

        v.clear();
        s.clear();

        for(int i =3;i<6;i++){
            for(int j = 3;j<6;j++){
                if(board[i][j]!='.'){
                    v.push_back(board[i][j]);
                    s.insert(board[i][j]);
                }
            }
        }
        if(v.size()!=s.size()) return false;

        v.clear();
        s.clear();

        for(int i =3;i<6;i++){
            for(int j = 6;j<9;j++){
                if(board[i][j]!='.'){
                    v.push_back(board[i][j]);
                    s.insert(board[i][j]);
                }
            }
        }
        if(v.size()!=s.size()) return false;

        v.clear();
        s.clear();

        for(int i =6;i<9;i++){
            for(int j = 0;j<3;j++){
                if(board[i][j]!='.'){
                    v.push_back(board[i][j]);
                    s.insert(board[i][j]);
                }
            }
        }
        if(v.size()!=s.size()) return false;

        v.clear();
        s.clear();

        for(int i =6;i<9;i++){
            for(int j = 3;j<6;j++){
                if(board[i][j]!='.'){
                    v.push_back(board[i][j]);
                    s.insert(board[i][j]);
                }
            }
        }
        if(v.size()!=s.size()) return false;

        v.clear();
        s.clear();

        for(int i =6;i<9;i++){
            for(int j = 6;j<9;j++){
                if(board[i][j]!='.'){
                    v.push_back(board[i][j]);
                    s.insert(board[i][j]);
                }
            }
        }
        if(v.size()!=s.size()) return false;

        return true;

    }
};