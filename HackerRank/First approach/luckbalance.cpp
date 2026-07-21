int luckBalance(int k, vector<vector<int>> contests) {
    int c=0;
    sort(contests.begin(),contests.end());
    for(int i=0;i<contests.size();i++){
        c+=contests[i][0];
    }
    for(int i=contests.size()-1;i>=0;i--){
        if(contests[i][1]==0){
            continue;
        }else if(contests[i][1]==1&&k>0){
            k--;
        }else{
            c-=2*contests[i][0];
        }
    }
    return c;
}
