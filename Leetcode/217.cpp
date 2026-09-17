bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>set;
        for(int x:nums){
            if(set.count(x))return 1;
            set.insert(x);
        }
        return 0;
    }
