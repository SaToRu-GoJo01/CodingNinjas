int binarySearch(vector<int> &nums, int target, int low, int high){
    while(low <= high){
        int mid = (low+high)/2;
        if(target == nums[mid]){
            return mid;
        }
        else if(target < nums[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
int search(vector<int> &nums, int target) {
    return binarySearch(nums,target,0,nums.size()-1);
}
