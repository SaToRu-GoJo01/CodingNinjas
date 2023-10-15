string sortByFrequency(int n, string& s)
{
	unordered_map<char,int> mp;
	for(int i=0;i<s.size();i++){
		mp[s[i]]++;
	}
	vector<pair<char,int>> sortedVector(mp.begin(),mp.end());
	sort(sortedVector.begin(), sortedVector.end(),
            [](const pair<char, int>& a, const pair<char, int>& b) {
                return a.second > b.second;
            });
	string result = "";
	for(int i=0;i<sortedVector.size();i++){
		while(sortedVector[i].second != 0){
			result += sortedVector[i].first;
			sortedVector[i].second--;
		}
	}
	return result;
}
