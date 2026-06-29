class Solution {
public:
    vector<int> dp;
    int steps(int i,vector<int>& nums){
        int n = nums.size();
        if(dp[i] != -1) return dp[i];
        if(i == n-1) return nums[n-1];
        else if(i == n) return 0;

        int a = nums[i] + steps(i+2,nums);
        int b = steps(i+1,nums);

        return dp[i] = max(a,b);
    }

    int rob(vector<int>& nums) {
        dp = vector<int>(110,-1);
        return steps(0,nums);
    }
};
