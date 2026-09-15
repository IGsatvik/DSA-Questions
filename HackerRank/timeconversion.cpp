string timeConversion(string s) {
    int hour=stoi(s.substr(0,2));
    string ap=s.substr(8,2);
    if(ap=="AM"&&hour==12){
        s[0]='0';
        s[1]='0';
    }else if(ap=="PM"&&hour!=12){
        hour+=12;
        string h=to_string(hour);
        s[0]=h[0];
        s[1]=h[1];
    }
    return s.substr(0,8);
}
