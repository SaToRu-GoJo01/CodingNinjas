#include <unordered_map>
int missingK(vector<int> vec, int n, int k) {
    if(vec[0]>k) return k;
    int low = 0,high = n - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        // cout << " - " << vec[mid] << endl;
        if((vec[mid]- mid - 1)>=k){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    // cout << vec[high] << endl;
    return (vec[high] + (k-(vec[high]-high-1)));
}
