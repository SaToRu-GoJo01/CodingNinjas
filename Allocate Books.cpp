int func(vector<int> arr,int pages){
    int sum = 0,count = 0,noOfStudent = 1;
    for(int i=0;i<arr.size();i++){
        if(sum+arr[i] <= pages) sum+=arr[i];
        else{
            noOfStudent++;
            sum=arr[i];
        }
    }
    return noOfStudent;
}
int findPages(vector<int>& arr, int n, int m) {
    if(m > arr.size())
    return -1;
    int low=INT_MIN,high=0;
    for(auto i:arr){
        low = max(low,i);
        high += i;
    }
    while(low<=high){
        int mid = low + (high - low)/2;
        int noOfStudent = func(arr,mid);
        if(noOfStudent <= m){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}
