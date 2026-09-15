int maxMin(int k, vector<int> arr) {
    int res=INT_MAX;
    sort(arr.begin(),arr.end());
    for(int i=0;i<=arr.size()-k;i++){
        int c=0,current_min=arr[i],current_max=arr[i+k-1];
        for(int j=i;j<i+k;j++){
            current_min=min(current_min,arr[j]);
        }
        for(int j=i;j<i+k;j++){
            current_max=max(current_max,arr[j]);
        }
        c=current_max-current_min;
        if(c<res)res=c;
    }
    
    return res;
}

//redo...

int maxMin(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int res = INT_MAX;
    
    for (int i = 0; i <= arr.size() - k; i++) {
        res = min(res, arr[i + k - 1] - arr[i]);
        if (res == 0) return 0;
    }
    
    return res;
}
