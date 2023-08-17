int lowerBound(vector<int> arr, int n, int x) {
	int low = 0;
	int high = n-1;
	int ans=n;
	while(low <= high){
		int mid = (low+high)/2;
		if(x > arr[mid]){
			low = mid + 1;
		}
		else{
			ans = mid;
			high = mid - 1;
		}
	}
	return ans;
}
