int merge(vector<int> &a,int lower,int mid,int high){
    vector<int> temp;
    int left = lower;
    int right = mid+1;
    int count =  0;
    while(left <= mid && right <= high){
        if(a[left] <= a[right]){
            temp.push_back(a[left++]);
        }
        else{
            temp.push_back(a[right++]);
            count+=mid-left+1;
        }
    }
    while(left <= mid){
        temp.push_back(a[left++]);
    }
    while(right <= high){
        temp.push_back(a[right++]);
    }
    for (int i = lower; i <= high; i++) {
        a[i] = temp[i-lower];
    }
    return count;
}

int mergeSort(vector<int> &a,int lower,int high){
    if(lower == high) return 0;
    int mid = (lower+high)/2;
    int count=0;
    count+=mergeSort(a,lower,mid);
    count+=mergeSort(a,mid+1,high);
    count+=merge(a,lower,mid,high);
    return count;
}


int numberOfInversions(vector<int>&a, int n) {
    // int count=0;
    // for(int i=0;i<a.size()-1;i++){
    //     for(int j = i+1;j<a.size();j++)
    //     {
    //       if (a[i] > a[j]) {
    //         count++;
    //       }
    //     }
    // }
    // return count;

    // Merge Sort Approach
    return mergeSort(a,0,n-1);
}
