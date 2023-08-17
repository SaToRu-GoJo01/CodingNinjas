#include<vector>
#include<limits.h>
int subarrayWithMaxProduct(vector<int> &arr){
	int suffix = 1,preffix = 1;
	int maxi = INT_MIN;
	int n = arr.size()-1;
	for(int i=0;i<arr.size();i++){
		if(preffix == 0) preffix = 1;
		if(suffix == 0) suffix = 1;

		preffix *= arr[i];
		suffix *= arr[n-i];
		maxi = max(maxi,max(preffix,suffix));
	}
	return maxi;
}
