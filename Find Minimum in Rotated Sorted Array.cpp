int findMin(vector<int>& arr)
{
	int result=INT_MAX;
	int low = 0,high = arr.size()-1;
        while (low <= high) {
			int mid = low + (high - low)/2;
			if(arr[mid] >= arr[low]){
				result = min(arr[low],result);
				low = mid + 1;
                        } else {
                                result = min(arr[mid], result);
                                high = mid - 1;
                        }
        }
        return result;
}
