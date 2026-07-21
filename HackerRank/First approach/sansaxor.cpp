int sansaXor(vector<int> arr) {
    int res=0;
    if(arr.size()%2==0)return 0;
    for(int i=0;i<arr.size();i+=2){
        res^=arr[i];
    }
    return res;
}
