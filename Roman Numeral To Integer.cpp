int romanToInt(string s) {
    unordered_map<char,int> mp{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
    };
    int result = 0;
    for(int i=0;i<s.size();i++){
        result+=mp[s[i]];
        if(mp[s[i-1]] < mp[s[i]]){
            result-=2*mp[s[i-1]];
        }
    }
    return result;
}
