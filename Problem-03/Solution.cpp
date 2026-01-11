class Solution {
public:
    int findMaxDiff(vector<int>& nums,int l,int r,int n){
        if(l==r) return nums[l];

        int scoreByLeft = nums[l] - findMaxDiff(nums,l+1,r,n);
        int scoreByRight = nums[r] - findMaxDiff(nums,l,r-1,n);

        return max(scoreByLeft,scoreByRight);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        return findMaxDiff(nums,0,n-1,n)>=0;
    }
};
