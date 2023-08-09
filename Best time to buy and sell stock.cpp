int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // BRUTE FORCE APPROACH
    // int maxi=INT_MIN;
    // for(int i=0;i<prices.size();i++){
    //     for(int j=i+1;j<prices.size();j++){
    //         if(prices[j] - prices[i] > maxi){
    //             maxi = prices[j] - prices[i];
    //         }
    //     }
    // }
    // if(maxi < 0)
    // return 0;
    // return maxi;

    // OPTIMAL APPROACH
    int maxi = 0,mini=INT_MAX;
    for(auto i:prices){
        mini = min(i,mini);
        maxi = max(maxi,i-mini);
    }
    return maxi;
}
