int maxDepth(string s) {
	int count  = 0,ans = 0;
    for(int i=0;i<s.length();i++){
      if (s[i] == '(' || s[i] == ')') {
        if (s[i] == '(')
          count++;
        else if (s[i] == ')')
          count--;
        ans = max(ans,count);
      }
    }
    return ans;
}
