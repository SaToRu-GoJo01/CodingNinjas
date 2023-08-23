int func(int mid, int n, int m) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
}
int NthRoot(int n, int m) {
    if(m == 1 or n == 0)
    return 1;
    int low = 1,high = m;
    while(low <= high){
        int mid = low + (high - low)/2;
        int ans = func(mid,n,m);
        // cout << ans << "  " ;
        if(ans == 1)
        return mid;
        else if(ans == 2)
        high = mid - 1;
        else
        low = mid + 1;
    }
    return -1;
}
