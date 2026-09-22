class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int l=0,r=n-1,p=n-1;
        while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
                ans[p]=pow(nums[l],2);
                l++;
            }else {
                ans[p]=pow(nums[r],2);
                r--;
            }
            p--;
        }
        return ans;
    }
};