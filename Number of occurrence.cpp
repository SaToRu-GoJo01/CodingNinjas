int first(vector<int> &arr,int low,int high,int k){
    int ans=-1;
    while(low <= high){
        int mid = low + (high - low)/2; 
        if(arr[mid] == k){
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] < k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
} 
int last(vector<int> &arr,int low,int high,int k){
    int ans=-1;
    while(low <= high){
        int mid = low + (high - low)/2; 
        if(arr[mid] == k){
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid] < k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
} 
int count(vector<int>& arr, int n, int x) {
	int a = first(arr,0,n-1,x);
	if(a == -1) return 0;
	int b = last(arr,0,n-1,x);
	return b-a+1;
}
