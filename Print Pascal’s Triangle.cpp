vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> result(N);
    if(N >= 1)
    result[0].push_back(1);
    if (N >= 2) {
        result[1].push_back(1);
        result[1].push_back(1);
    }
    for(int i = 2; i<N;i++){
        result[i].push_back(1);
        for(int j = 1;j<i;j++){
            result[i].push_back(result[i-1][j] + result[i-1][j-1]);
        }
        result[i].push_back(1);
    }
    return result;


    // vector<vector<int>> result(N);
    //     // result[0].push_back(1);
    //     // result[1].resize(2,1);
    //     if (N >= 1) {
    //         result[0].push_back(1);
    //     }
    //     if (N >= 2) {
    //         result[1].resize(2, 1);
    //     }
    //     int i = 2;
    //     while(i < N){
    //         result[i].push_back(1);
    //         int k = 0;
    //         while(k < i - 1){
    //             result[i].push_back(result[i-1][k]+result[i-1][k+1]);
    //             k++;
    //         }
    //         result[i].push_back(1);
    //         i++;
    //     }
    //     return result;
}
