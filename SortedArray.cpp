#include <set>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    vector<int> result;
    set<int> st;
    for(auto i:a)
    st.insert(i);
    for(auto i:b)
    st.insert(i);
    for(auto i:st)
    result.push_back(i);
    return result;
}
