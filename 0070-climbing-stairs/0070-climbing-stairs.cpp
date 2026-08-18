class Solution {
public:
    int f(int i,vector<int>&dp)
    {
        // base condn
        if(i==1)
        return 1;

        if(i==2)
        return 2;

      
      if(dp[i]!=-1)
      return dp[i];


        int l=f(i-1,dp);
        int r=f(i-2,dp);

        return dp[i]=l+r;


    }
    int climbStairs(int n) {
        // 1 ) dp array intialize 
        vector<int>dp(n+1,-1);
        return f(n,dp);
    }
};