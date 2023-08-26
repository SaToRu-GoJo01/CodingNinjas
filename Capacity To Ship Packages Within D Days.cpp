bool possible(vector<int> weights,int d,int current){
    int noOfDays = 1,load = 0;
    for(auto i:weights){
        if((load + i)<= current){
            load += i;
        }
        else{
            noOfDays++;
            load=i;
        }
    }
    return noOfDays <= d;
}
int leastWeightCapacity(vector<int> &weights, int d)
{
    int low = INT_MIN, high = 0,ans;
    for(auto i: weights){
        high += i;
        low = max(i,low);
    }
    while(low <= high){
        int mid = low + (high - low)/2;
        if(possible(weights,d,mid)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
