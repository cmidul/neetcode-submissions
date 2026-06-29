class Solution {
public:
    vector<int> dp;

    int f(int i, vector<int>& nums){
        int n = nums.size();
        if(dp[i] != -1) return dp[i];
        if(i >= nums.size()) return 0;
        else if(i == n-1) return nums[n-1];
        
        int a = nums[i] + min(f(i+1,nums),f(i+2,nums));
        //int b = nums[i+1] + min(f(i+1,nums),f(i+2,nums));
        //cout << "cost is " << a << " when i is " << i << " \n";
        

        return dp[i] = a;
    }

    int minCostClimbingStairs(vector<int>& cost) {
        dp = vector<int>(100,-1);
        return min(f(0,cost),f(1,cost));
    }
};
