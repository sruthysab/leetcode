#include <unordered_map>
#include <utility>
#include <string>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, set<char>> rows;
        unordered_map<char, set<char>> cols;
        map<pair<int, int>, set<char>> squares;
        
        for(int r = 0; r < 9; r++) {
            for(int c = 0; c < 9; c++){
                if(board[r][c] == '.'){
                    continue;
                }
                auto sq_index = make_pair(r/3, c/3);
                if(rows[r].find(board[r][c]) != rows[r].end()
                || cols[c].find(board[r][c]) != cols[c].end()
                || squares[sq_index].find(board[r][c]) != squares[sq_index].end()){
                    return false;
                }
                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                squares[sq_index].insert(board[r][c]);
            }
        }
        return true;
    }
};