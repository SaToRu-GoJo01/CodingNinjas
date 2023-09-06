int small(vector<int>a){
    int small=INT_MAX,secondSmall = INT_MAX;
    for(auto i : a){
        if(i < small){
            secondSmall = small;
            small = i;
        }
        else if(i < secondSmall && i != small){
            secondSmall = i;
        }
    }
    return secondSmall;
}
int large(vector<int> a){
    int large=INT_MIN,secondLarge=INT_MIN;
    for(auto i:a){
        if(i > large){
            secondLarge = large;
            large = i;
        }
        else if(i > secondLarge && i != large){
            secondLarge = i;
        }
    }
    return secondLarge;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector<int> result;
    //NAIVE APPROACH
    // sort(a.begin(),a.end());
    // result.push_back(a[n-2]);
    // result.push_back(a[1]);

    //BETTER APPROACH
    // int small=INT_MAX,secondSmall = INT_MAX,large=INT_MIN,secondLarge=INT_MIN;
    // for(auto i:a){
    //     small = min(small,i);
    //     large = max(large,i);
    // }
    // for(auto i:a){
    //     if(i < secondSmall && i != small)
    //     secondSmall = i;
    //     else if(i > secondLarge && i != large)
    //     secondLarge = i;
    // }
    // result.push_back(secondLarge);
    // result.push_back(secondSmall);

    
    //BEST APPROACH
    result.push_back(large(a));
    result.push_back(small(a));
    return result;
}
