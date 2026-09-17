vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>pre;
        for(int i=0;i<nums.size();i++){
            if(pre.find(target-nums[i])!=pre.end()){
                return{pre[target-nums[i]],i};
            }
            pre[nums[i]]=i;
        }
        return {};
    }