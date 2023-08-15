#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// sort(arr.begin(),arr.end());
	vector<vector<int>> result;
	result.push_back(arr[0]);
	for(int i=1; i<arr.size();i++){
		if(result.back()[1] >= arr[i][0]){
			result.back()[1] = max(result.back()[1], arr[i][1]);
		}
		else{
			result.push_back(arr[i]);
		}
	}
	return result;
}
