class Solution {
public:
    int f(int i,vector<int>& nums,vector<int>& dp)
    {
        if(i<0)
        return 0;

        if(dp[i]!=-1)
        return dp[i];

        return dp[i]=max(nums[i]+f(i-2,nums,dp),f(i-1,nums,dp));
    }
    int rob(vector<int>& nums) {
       int n=nums.size(); 
       if(n==1)
       return nums[0];
       vector<int>temp1,temp2;
       for(int i=0;i<n;i++)
       {
        if(i!=0)
        temp1.push_back(nums[i]);
        if(i!=n-1)
        temp2.push_back(nums[i]);
        
       }
       vector<int>dp1(temp1.size()+1,-1);
       vector<int>dp2(temp2.size()+1,-1);
        int res1=f(temp1.size()-1,temp1,dp1);
        int res2=f(temp2.size()-1,temp2,dp2);
        return max(res1,res2);
    }
};