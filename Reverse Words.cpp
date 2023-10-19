string revWords(string str) {
    int i=0,j=0;
    while(i < str.length()){
        while(i < str.length() && str[i] == ' ') i++;
        if(j > 0 && i < str.length()) str[j++]=' ';
        int start = j;
        while(i < str.length() && str[i] != ' '){
            str[j++] = str[i++];
        }
        reverse(str.begin()+start,str.begin()+j);
    }
    str.resize(j);
    reverse(str.begin(),str.end());
    return str;
}
