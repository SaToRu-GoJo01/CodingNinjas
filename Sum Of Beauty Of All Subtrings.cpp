int sumOfBeauty(string s) {
	unordered_map<char,int> mp;
    int result = 0;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            mp[s[j]]++;
            int maximum=INT_MIN,minimum=INT_MAX;
            for(auto it:mp){
                maximum = max(maximum,it.second);
                minimum = min(minimum,it.second);
            }
            result += (maximum - minimum);
        }
        mp.clear();
    }
    return result;
}
