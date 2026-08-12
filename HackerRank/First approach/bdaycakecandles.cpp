int birthdayCakeCandles(vector<int> candles) {
    int max=0;
    int c=0;

    for (int h:candles) {
        if (h>max) {
            max=h;
            c=1;
        } else if (h==max) {
            c++;  
        }
    }
    return c;
}
