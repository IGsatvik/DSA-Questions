long strangeCounter(long t) {
    long c=3;
    while(t>c){
        t-=c;
        c*=2;
    }
    return c-t+1;
}
