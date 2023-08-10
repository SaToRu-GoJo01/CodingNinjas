vector<int> superiorElements(vector<int>&a) {
    vector<int> result;
    int n = a.size() - 1;
    int max = a[n];
    result.push_back(a[n]);
    for(int i=n;i>=0;i--){
        if(max <  a[i]){
            result.push_back(a[i]);
            max = a[i];
        }
    }
    sort(result.begin(),result.end());
    return result;
}
