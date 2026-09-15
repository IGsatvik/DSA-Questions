class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxs=0;
        int l=0,r=height.size()-1;
        while(l<r){
            int top=min(height[l],height[r]);
            maxs=max(maxs,top*abs(l-r));
            if(height[l]>height[r])r--;
            else l++;
        }
        return maxs;
    }
};