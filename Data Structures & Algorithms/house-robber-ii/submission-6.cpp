class Solution {
public:
    vector<int> dp;
    int f(int i, vector<int>& nums, bool x){
        int n = nums.size();
        if(dp[i] != -1) return dp[i];
        if(i == n-1 && x != true) return nums[n-1];
        else if(i == n-1 && x == true) return 0;
        else if(i >= n) return 0;

        int a = nums[i] + f(i+2,nums,x);
        int b = f(i+1,nums,x);
        return dp[i] = max(a,b);
    }

    vector<int> dp2;
    int f2(int i, vector<int>& nums, bool x){
        int n = nums.size();
        if(dp2[i] != -1) return dp2[i];
        if(i == n-1 && x != true) return nums[n-1];
        else if(i == n-1 && x == true) return 0;
        else if(i >= n) return 0;

        int a = nums[i] + f2(i+2,nums,x);
        int b = f2(i+1,nums,x);
        return dp2[i] = max(a,b);
    }

    int rob(vector<int>& nums) {
        dp = vector<int>(200,-1);
        dp2 = vector<int>(200,-1);
        if(nums.size() == 1) return nums[0];
        bool y = true;
        bool n = false;
        return max(f(0,nums,y),f2(1,nums,n));
    }
};
