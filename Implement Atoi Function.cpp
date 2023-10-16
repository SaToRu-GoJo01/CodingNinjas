int createAtoi(string s) {
    // int i=0;
    // while(i < s.size() && s[i] == ' '){
    //     i++;
    // }
    // int sign = 1;
    // if(s[i] == '-'){
    //     sign = -1;
    //     i++;
    // }
    // else if(s[i] == '+'){
    //     sign = 1;
    //     i++;
    // }
    // double result=0;
    // while(i<s.size() && (s[i] >= 48 && s[i] <= 57)){
    //     result = result*10 + (s[i++]-'0');
    // }
    // if(sign*result > INT_MAX){
    //     return INT_MAX;
    // }
    // else if(sign*result < INT_MIN){
    //     return INT_MIN;
    // }
    // else{
    //     return sign*result;
    // }
    double num = 0;
        int sign=1;
        int i = 0;
        while(s[i] == ' ')
        {
            i++;
        }
        bool positive =  s[i] == '+';
        bool negative =  s[i] == '-';
        positive ? i++ : i;
        negative ? i++ : i;
        while(i < s.size() && s[i] >= 48 && s[i] <= 57){
            num = num*10 + (s[i ]- '0');
            i++;
        } 
        num = negative ? -num : num;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        return int(num);
}
