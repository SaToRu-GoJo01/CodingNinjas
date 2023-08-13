#include <bits/stdc++.h>
#include <vector>
using namespace std;
// void makeZero(vector<vector<int>> &matrix, int i, int j, int n, int m){
// 	for(int jt = 0;jt < m;jt++){
// 		matrix[i][jt] = 0;
// 	}
// 	for(int it = 0;it < n;it++){
// 		matrix[it][j] = 0;
// 	}
// } 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	int i , j;
	int row[n] = {0};
	int column[m] = {0};
	for(int i=0;i<n;i++){
		for(j = 0;j<m;j++){
                  if (matrix[i][j] == 0) {
                    row[i] = 1;
					column[j] = 1;
                  }
                }
        }
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row[i] || column[j] ){
				matrix[i][j] = 0;
			}
		}
	}
	return matrix;
}
