class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
    long long int n=x;
    long long int rev=0;
    while(x>0)
    {
        int dig=x%10;
        rev=rev*10+dig;
        x=x/10;
    }   
    if(rev==n)
    return true;
    else
    return false;
    }
};