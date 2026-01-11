class Solution {
public:
    int solve(vector<int>& dp,int n,vector<int>& nums,int ind){
        if(ind>=n) return 0;

        if(dp[ind]!=-1) return dp[ind];

        return dp[ind] = max(solve(dp,n,nums,ind+2) + nums[ind],solve(dp,n,nums,ind+1));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return solve(dp,n,nums,0);
    }
};
