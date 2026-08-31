int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> presum;
        presum[0]=1;
        int cs=0;
        int totalsarr=0;
        for(int num:nums){
            cs+=num;
            if(presum.find(cs-k)!=presum.end()){
                totalsarr+=presum[cs-k];
            }
            presum[cs]++;
        }
        return totalsarr;
    }
