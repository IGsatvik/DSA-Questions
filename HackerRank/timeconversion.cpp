string timeConversion(string s) {
    int hour=stoi(s.substr(0,2));
    string ap=s.substr(8,2);
    if(ap=="AM"){
        if(hour==12)hour=0;
    }
    else{
        if(hour!=12)hour+=12;
    }
    string ans=(hour<10?"0":"")+to_string(hour);
    return ans+s.substr(2,6);
}
