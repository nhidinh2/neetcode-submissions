class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, int> check; 
        for (auto row : board){
            for (auto each : row){
                if (each != '.'){
                    if (check.count(each) > 0){
                        return false;
                    } else {
                        check.insert({each, 1});
                    }
                }
            }
            check.clear(); 
        }
        
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if (board[j][i] != '.'){
                    if (check.count(board[j][i]) > 0){
                        return false;
                    } else {
                        check.insert({board[j][i], 1});
                    }
                }
            }
            check.clear(); 
        }
        for (int rowStart = 0; rowStart < 9; rowStart += 3) {
            for (int colStart = 0; colStart < 9; colStart += 3) {
                for (int row = rowStart; row < rowStart + 3; row++) {
                    for (int col = colStart; col < colStart + 3; col++) {
                        char each = board[row][col];

                        if (each != '.') {
                            if (check.count(each) > 0) {
                                return false;
                            }
                            check.insert({each, 1});
                        }
                    }
                }

                check.clear();
            }
        }

        return true; 
    }
};
