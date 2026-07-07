class Solution {
public:
    pair<int,int> sum(int n)
    {
        int sum=0,square=0;
        while(n)
        {
            int r=n%10;
            sum+=r;
            square+=pow(r,2);
            n/=10;
        }
        return {sum,square};
    }
    bool checkGoodInteger(int n) {
      pair<int,int>ans=sum(n);
      if(ans.second-ans.first>=50)
      return true;
      else
      return false; 
    }
};