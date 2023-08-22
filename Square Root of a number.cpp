int floorSqrt(int n)
{
    if(n == 1 || n == 0)
    return n;
    int low = 2, high = n,ans;
    while(low <= high){
        int mid = low +  (high - low)/2;
        if(mid <= n/mid){
            low = mid + 1;
            ans = mid;
        }
        
        else
        high = mid - 1;
    }
    return ans;
}
