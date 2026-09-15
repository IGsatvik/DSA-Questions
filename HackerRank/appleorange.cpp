void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int A=0,O=0;
    for(int i=0;i<apples.size();i++){
        if(apples[i]+a>=s&&apples[i]+a<=t)A++;
    }
    for(int i=0;i<oranges.size();i++){
        if(oranges[i]+b>=s&&oranges[i]+b<=t)O++;
    }
    cout << A << endl << O;
}
