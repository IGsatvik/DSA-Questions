string twoArrays(int k, vector<int> A, vector<int> B) {
    sort(B.begin(),B.end());
    sort(A.begin(),A.end(),greater<int>());
    for(int i=0;i<A.size();i++){
        if(A[i]+B[i]<k){
            return "NO";
            break;
        }
    }
    
    return "YES";
}
