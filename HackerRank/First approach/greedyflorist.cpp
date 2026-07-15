int getMinimumCost(int k, vector<int> c) {
    int a=0,count=c.size(),b=1;
    sort(c.begin(),c.end());
    while(count>0){
        for(int i=count-1;i>count-k-1&&i>=0;i--){
            a+=b*c[i];
        }
        b++;
        count=count-k;
    }
    return a;
}
