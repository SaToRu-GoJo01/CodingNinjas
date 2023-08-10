vector<int> alternateNumbers(vector<int>&a) {
    vector<int> result(a.size());
    int negIdx=1,posIdx=0;
    for(int i=0;i<a.size();i++){
        if(a[i] < 0){
            result[negIdx] = a[i];
            negIdx+=2;
        }
        else{
            result[posIdx] = a[i];
            posIdx+=2;
        }
    }   
    return result;
}
