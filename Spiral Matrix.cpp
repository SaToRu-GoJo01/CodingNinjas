vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    vector<int> result;
    int top = 0,left = 0,bottom = MATRIX.size()-1,right = MATRIX[0].size()-1;
    while(top<=bottom && left <= right){
        for(int i =left;i<=right;i++){
            result.push_back(MATRIX[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            result.push_back(MATRIX[i][right]);
        }
        right--;
        if(top <= bottom){
            for (int i = right; i >= left; i--) {
              result.push_back(MATRIX[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            for (int i = bottom; i >= top; i--) {
              result.push_back(MATRIX[i][left]);
            }
            left++;
        }
    }
    return result;
}
