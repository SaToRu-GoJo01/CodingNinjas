string commonPrefix(vector<string>& arr,int n){
	string str = arr[0];
    for(int i = 1;i<n;i++){
        string extra = arr[i];
        for(int j=0;j<str.size();j++){
            if(str[j] != extra[j]){
                str.erase(j);
                break;
            }
        }
    }
    return str.size()>0?str:"-1";
}
