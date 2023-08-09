#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    if(n == 0)
    return 0;
    else{
        long long sum=0,maxi=LONG_MIN;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(maxi < sum)
            maxi = sum;
            if(sum < 0)
            sum = 0;
        }
        if(maxi > 0)
        return maxi;
        return 0;
    }
}
