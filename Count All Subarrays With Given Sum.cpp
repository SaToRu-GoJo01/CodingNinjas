#include <unordered_map>
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int count = 0;

    //NAIVE APPROACH
    // int start =0,end=0;
    
    // while(start < arr.size()){
    //     int sum = 0;
    //     // bool find = true;
    //     end = start;
    //     while(end < arr.size()){
    //         sum += arr[end];
    //         end++;
    //         if(sum == k){
    //             count++;
    //             break;
    //         }
    //         if(sum > k)
    //         break;
    //     }
    //     start++;
    // }

    //OPTIMAL APPROACH
    unordered_map<int,int> mp;
    mp[0] = 1;
    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
        int x = sum - k;
        if(mp.find(x) != mp.end()){
            count++;
        }
        mp[sum] = i;
    }
    return count;
}
