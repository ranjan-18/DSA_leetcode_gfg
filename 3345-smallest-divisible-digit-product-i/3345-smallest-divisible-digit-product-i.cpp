class Solution {
public:
    int digit(int n)
    {
        int res=1;
        while(n)
        {
            int r=n%10;
            res*=r;
            n=n/10;
        }
        return res;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;i<n+10;i++)
        {
            int res=digit(i);
            if(res%t==0)
            return i;
        }
        return 0;
    }
};