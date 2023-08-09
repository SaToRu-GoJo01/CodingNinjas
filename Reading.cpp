string read(int n, vector<int> book, int target)
{
    //FIRST APPROACH
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         if(book[i]+book[j] == target)
    //         return "YES";
    //     }
    // }

    // TWO POINTER APPROACH
    sort(book.begin(),book.end());
    int left=0,right=n-1;
    while(left < right){
        int sum = book[left]+book[right];
        if(sum == target)
        return "YES";
        else if(sum > target)
        right--;
        else
        left++;
    }
    return "NO";
}
