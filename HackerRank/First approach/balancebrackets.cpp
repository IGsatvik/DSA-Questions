string isBalanced(string s) {
    stack<char>v;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            v.push(s[i]);
        else{
            if(v.size()==0)return "NO";
            if(s[i]==')'&&v.top()=='(')v.pop();
            else if(s[i]=='}'&&v.top()=='{')v.pop();
            else if(s[i]==']'&&v.top()=='[')v.pop();
            else return "NO";
        }
    }
    return "YES";
}
