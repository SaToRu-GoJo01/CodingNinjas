int singleNonDuplicate(vector<int>& arr)
{
	if(arr.size() == 1)
    return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[arr.size()-1] != arr[arr.size()-2]) return arr[arr.size()-1];
    else{
        int low = 1, high = arr.size()-2;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid+1]){
                return arr[mid];
            }
            if((mid % 2 == 1 && arr[mid-1] == arr[mid])||(mid % 2 == 0 && arr[mid+1] == arr[mid]))
            low = mid + 1;
            else
            high = mid - 1;
        }
    }
    return -1;
}
