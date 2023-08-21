#include <limits.h>
int findKRotation(vector<int> &arr){
    int low =0,high = arr.size() - 1;
    int ans = 0;
    int result = INT_MAX;
    while(low <= high){
        int mid = low+(high - low)/2;
        if(arr[low] <= arr[high]){
            if(arr[low] < result){
                ans = low;
                result = arr[low];
            }
            break;
        }
        if(arr[mid] >= arr[low]){
          if (result > arr[ans]) {
            ans = low;
            result = arr[low];
          }
            low = mid + 1;
        }
        else{
            if(arr[mid] < result){
            ans = mid;
            result = arr[mid];
            }
            high = mid - 1;
        }
    }
    return ans;
}
