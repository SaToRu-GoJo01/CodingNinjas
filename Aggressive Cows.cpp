#include <limits.h>
#include <algorithm>
int func(vector<int> stalls,int k,int mid){
    int noOfCows = 1,last = stalls[0];
    for(int i = 1; i<stalls.size();i++){
        if(stalls[i]-last>=mid){
            last = stalls[i];
            noOfCows++;
        }
        if(noOfCows >= k)
        return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int low = 1,high=stalls[stalls.size()-1]-stalls[0];
    int ans = 0;
    while(low <= high){
        int mid = low + (high - low)/2;
        // ans = func(stalls,--k,mid);
        if(func(stalls,k,mid)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
