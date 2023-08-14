#include <map>
int subarraysWithSumK(vector < int > a, int b) {
    int count  = 0;
    map<int,int> frontXOR;
    int xr = 0;
    frontXOR[xr]++;
    for(int i=0;i<a.size();i++){
        xr ^= a[i];
        int x = xr ^ b;
        count += frontXOR[x];
        frontXOR[xr]++;
    }
    return count;
}
