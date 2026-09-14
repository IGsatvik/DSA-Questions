vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n=a.size();
    k%=n;
    vector<int>ans;
    for(int x:queries){
        ans.push_back(a[(x+n-k)%n]);
    }
    return ans;
}
