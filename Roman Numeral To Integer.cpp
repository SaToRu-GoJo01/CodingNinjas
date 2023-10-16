int romanToInt(string s) {
    int sum=0;
        unordered_map<char,int> romanNumber{
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        for(int i=0;i<s.length();i++)
        {
            if(romanNumber[s[i]] < romanNumber[s[i+1]])
            sum = sum - romanNumber[s[i]];
            else
            sum = sum + romanNumber[s[i]];
        }
        return sum;
}
