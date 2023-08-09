#include <unordered_map>
int majorityElement(vector<int> v) {
	unordered_map<int,int> result;
	for(int i=0;i<v.size();i++){
		result[v[i]]++;
	}
	for(auto i:result){
		if(i.second >= floor(v.size()/2))
		return i.first;
	}
}
