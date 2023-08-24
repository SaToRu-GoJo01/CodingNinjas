bool func(vector<int> arr, int k,int m, int current){
	int count = 0,cnt=0;
	for(auto i:arr){
		if(i <= current){
			count++;
		}
		else{
			cnt += (count/k);
			count=0;
		}
	}
	cnt += (count/k);
	return cnt >= m;
}
int roseGarden(vector<int> arr, int k, int m)
{
	if(arr.size() < m*k)
		return -1;
	int low = INT_MAX,high=INT_MIN,ans = -1;
	for(auto i:arr){
		low = min(low,i);
		high = max(high,i);
	}
	while(low <= high){
		int mid = low + (high-low)/2;
		if(func(arr,k,m,mid)){
			ans = mid;
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return ans;
}
