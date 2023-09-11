int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    
    //BRUTE FORCE
    // vector<int> result(matrix.size(),0);
    // for(int i=0;i<matrix.size();i++){
    //     int count = 0;
    //     for(int j=0;j<matrix[0].size();j++){
    //         if(matrix[i][j] == 1) count++;
    //     }
    //     result[i] = count;
    // }
    // int ans = 0;
    // int row;
    // for(int i=0;i<result.size();i++){
    //     if(ans < result[i]){
    //         row = i;
    //         ans = result[i];
    //     }
    // }
    // if(ans == 0) return -1;
    // return row;

    //OPTIMAL APPROACH
    int index = -1,maxCount = 0;
    for(int i=0;i<n;i++){
        int noOfOnes = m - lowerBound(matrix[i],m,1);
        if(noOfOnes > maxCount){
            maxCount = noOfOnes;
            index = i;
        }
    }
    return index;
}
