int searchInsert(vector<int>& arr, int m)
{
	int mid = 0;
	int low = 0;
	int high = arr.size() - 1;
	while(low <= high){
		mid = (low+high)/2;
		if(arr[mid] == m)
		return mid;
		else if(arr[mid] < m)
		low = mid + 1;
		else
		high = mid - 1;
	}
	return low; //or return high + 1
}
