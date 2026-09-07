bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int>f(26,0);
        for(char c:s){
            f[c-'a']++;
        }
        for(char c:t){
           if(--f[c-'a']<0)return false; //focus here(0ms)
        }
        return true;
    }

//my answer(1ms)
bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int>f(26,0);
        for(char c:s){
            f[c-'a']++;
        }
        for(char c:t){
            f[c-'a']--;
        }
        for(int x:f){
            if(x!=0)return false;
        }
        return true;
    }
