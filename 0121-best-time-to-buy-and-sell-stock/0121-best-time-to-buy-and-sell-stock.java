class Solution {
    public int maxProfit(int[] prices) {
    int n=prices.length;
    int maxi=0;
    int buy=prices[0];
    for(int i=1;i<n;i++)
    {
        maxi=Math.max(maxi,prices[i]-buy);
        buy=Math.min(buy,prices[i]);
    }
    return maxi;
    }
}