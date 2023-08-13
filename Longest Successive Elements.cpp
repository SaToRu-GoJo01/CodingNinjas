#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int longestSuccessiveElements(vector<int>&a) {
    set<int> st(a.begin(),a.end());
   int count = 1,maxi  = 1;
   for(auto it = next(st.begin()); it != st.end(); ++it){
       if(*it - *prev(it) == 1){
           count++;
           maxi = max(maxi,count);
       }
       else{
           count = 1;
       }
   }
   return maxi;
}
