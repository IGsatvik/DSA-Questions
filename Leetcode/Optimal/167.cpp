vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0,right=numbers.size()-1;
        while(left<right){
            int cs=numbers[left]+numbers[right];
            if(cs==target)return{left+1,right+1};
            else if(cs<target)left++;
            else right--;
        }
        return{};
    }
