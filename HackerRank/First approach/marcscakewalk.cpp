long marcsCakewalk(vector<int> calorie) {
    long x=0;
    sort(calorie.begin(),calorie.end(),greater<int>());
    for(int i=0;i<calorie.size();i++){
        x+=pow(2,i)*calorie[i];
    }
    return x;
}
