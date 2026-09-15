int birthdayCakeCandles(vector<int> candles) {
    int max=*max_element(candles.begin(),candles.end());
    //used * since max_element returns address
    return count(candles.begin(),candles.end(),max);
}
