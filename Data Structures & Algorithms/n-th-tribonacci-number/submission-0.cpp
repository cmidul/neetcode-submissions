class Solution {
public:
    vector<int> dp;
    int tibo(int i){
        if(dp[i] != -1) return dp[i];
        if(i == 0) return 0;
        else if(i <= 2) return 1;
        return dp[i] = (tibo(i-1) + tibo(i-2) + tibo(i-3));
    }

    int tribonacci(int n) {
        dp = vector<int>(100,-1);
        return tibo(n);
    }
};