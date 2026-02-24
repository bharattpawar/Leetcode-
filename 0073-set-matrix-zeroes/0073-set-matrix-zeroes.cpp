class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();

        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(matrix[i][j] == 0){
                    // row me mark
                    for(int k=0; k<column; k++){
                        if(matrix[i][k]!=0){
                            matrix[i][k] = -999;
                        }
                    }
                    // column me mark
                    for(int k=0; k<row; k++){
                        if(matrix[k][j]!=0){
                            matrix[k][j] = -999;
                        }
                    }
                }
            }
        }

     
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(matrix[i][j] == -999) matrix[i][j] = 0;
            }
        }
        return;
    }
};