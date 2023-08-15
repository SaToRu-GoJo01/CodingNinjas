#include<bits/stdc++.h>
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    vector<int> count(a.size()+1,0);
    vector<int>result;
    for(auto i:a){
        count[i]++;
    }
    int missing,DOUBLE;
    for(int i=1;i<count.size();i++){
        if(count[i] == 2){
            DOUBLE = i;
        }
        else if(count[i] == 0){
            missing = i;
        }
    }
    result.push_back(DOUBLE);
    result.push_back(missing);
    return result;
}
