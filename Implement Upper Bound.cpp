int upperBound(vector<int> &arr, int x, int n){
	int lower = 0, upper = n - 1;
	int ans=n;
	while(lower <= upper){
		int mid = (lower+upper)/2;
		if(arr[mid] > x){
			ans = mid;
			upper = mid - 1;
		}
		else if(arr[mid] <= x){
			lower = mid + 1;
		}
	}
	return ans;	
}
