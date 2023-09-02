#include <limits.h>
int func(vector<int> a,int mid){
    int sum = 0,partitions=1;
    for(int i=0;i<a.size();i++){
        if(a[i]+sum <= mid){
            sum += a[i];
        }
        else{
            partitions++;
            sum = a[i];
        }
    }
    return partitions;
}
int largestSubarraySumMinimized(vector<int> a, int k) {
    int low = INT_MIN,high=0;
    for(auto i:a){
        high += i;
        low = max(low,i);
    }
    while(low <= high){
        int mid = low + (high - low)/2;
        if(k >= func(a,mid)){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}
