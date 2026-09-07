bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>set;
        for(int x:nums){
            int i=set.size();
            set.insert(x);
            if(set.size()==i)return 1;
        }
        return false;
    }
