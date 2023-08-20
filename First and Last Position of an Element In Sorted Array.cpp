#include <bits/stdc++.h>
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
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int a = first(arr,0,n-1,k);
    if(a == -1) return {-1,-1};
    int b = last(arr,0,n-1,k);
    return {a,b};
}
