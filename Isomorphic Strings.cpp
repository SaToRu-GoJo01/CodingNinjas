bool areIsomorphic(string &str1, string &str2)
{
    if(str1.size() != str2.size()){
        return false;
    }
    unordered_map<char,char> mp;
    unordered_map<char,bool> used;
    for(int i=0;i<str1.size();i++){
        if(mp.find(str1[i]) != mp.end()){
            if(mp[str1[i]] != str2[i]){
                return false;
            }
        }
        else{
            if(used[str2[i]]) return false;
            used[str2[i]] = true;
            mp[str1[i]] = str2[i];
        }
    }
    return true;
}
