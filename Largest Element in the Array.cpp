#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // sort(arr.begin(),arr.end());
    // return arr[n-1];
    int maxi = INT_MIN;
    for(auto i: arr){
        maxi = max(maxi,i);
    }
    return maxi;
}
