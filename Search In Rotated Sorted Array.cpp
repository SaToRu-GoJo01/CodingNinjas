int search(vector<int>& arr, int n, int k)
{
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == k)
        return mid;
        if(arr[mid] >= arr[low]){
            if(arr[mid] >= k && arr[low] <= k)
            high = mid - 1;
            else low = mid + 1;
        }
        else{
            if(arr[mid] <= k && arr[high] >= k)
            low = mid + 1;
            else
            high = mid - 1;
        }
    }
    return -1;
}
