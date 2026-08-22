class Solution {
    public boolean checkDivisibility(int n) {
      int sum=0;
      int temp=n;
      int product=1;
      while(n>0)
      {
        int r=n%10;
        sum+=r;
        product*=r;
        n=n/10;
      }  
      return (temp%(sum+product)==0);
    }
}