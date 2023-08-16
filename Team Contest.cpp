int countPairs(vector<int> skill,int lower,int mid,int high){
    int count = 0;
    int right = mid+1;
    for(int left=lower;left<=mid;left++){
        while(right <= high && skill[left] > 2*skill[right])
        right++;
        count += (right - (mid + 1));
    }
    return count;
}

int merge(vector<int> &skill, int lower,int mid,int upper){
    int left = lower;
    int right = mid+1;
    vector<int> temp;
    while(left <= mid && right <= upper){
        if(skill[left] <= skill[right])
        {
            temp.push_back(skill[left++]);
        }
        else{
            temp.push_back(skill[right++]);
        }
    }
    while(left <= mid){
        temp.push_back(skill[left++]);
    }
    while(right <= upper){
        temp.push_back(skill[right++]);
    }
    for(int i=lower;i<=upper;i++){
        skill[i] = temp[i-lower];
    }
}


int mergeSort(vector<int> &skill,int lower,int upper){
    int count = 0;
    if(lower >= upper) return count;
        int mid = (lower+upper)/2;
        count += mergeSort(skill, lower, mid);
        count += mergeSort(skill,mid+1,upper);
        count += countPairs(skill, lower, mid, upper);
        merge(skill,lower,mid,upper);
        return count;
}


int team(vector <int> & skill, int n)
{
    return mergeSort(skill,0,n-1);
}
