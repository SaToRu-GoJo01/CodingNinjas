bool possible(vector<int>&arr,int limit,int current){
	int sum = 0;
	for(auto i:arr){
		sum += ceil(i/(double)current);
	}
	return sum <= limit;
}
int smallestDivisor(vector<int>& arr, int limit)
{
	int low = INT_MAX,high = INT_MIN,ans;
	for(auto i: arr){
		low = min(low,i);
		high = max(high,i);
	}
	while(low <= high){
		int mid = low + (high - low)/2;
		if(possible(arr,limit,mid)){
			high = mid - 1;
			ans = mid;
		}
		else{
			low = mid + 1;
		}
	}
	return ans;
}
