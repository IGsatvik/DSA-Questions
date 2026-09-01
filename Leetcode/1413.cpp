int minStartValue(vector<int>& nums) {
        int sum=0,min=INT_MAX;
        for(int x:nums){
            sum+=x;
            if(min>sum)min=sum;
        }
        if(min>0)return 1;
        return abs(min)+1;
    }
