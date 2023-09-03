#include<unordered_map>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int len = 0;
    //HASHMAP APPROACH
    // long long sum=0;
    // unordered_map<int,int> mp;
    // for(int i=0;i<a.size();i++){
    //     sum = sum + a[i];
    //     long long x  = sum - k;
    //     if(sum == k){
    //         len = max(len,i+1);
    //     }
    //     if(mp.find(x) != mp.end()){
    //         len = max(len,i-mp[x]);
    //     }
    //     if(mp.find(sum) == mp.end()){
    //         mp[sum] = i;
    //     }
    // }
    

    //TWO POINTER APPROACH
    int long long sum = a[0];
    int left = 0,right = 0;
    while(right < a.size()){
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }
        if(sum == k){
            len = max(len,right - left + 1);
        }
        right++;
        if(right < a.size()) sum += a[right];
    }
    return len;
}
