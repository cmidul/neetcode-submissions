class Solution {
public:
    vector<int> dp;

    int steps(int i){
        if(dp[i] != -1) return dp[i];
        if(i == 1) return 1;
        else if(i == 2) return 2;

        return dp[i] = steps(i-1) + steps(i-2);
    }

    int climbStairs(int n) {
        dp = vector<int>(100,-1);
        return steps(n);
    }
};
