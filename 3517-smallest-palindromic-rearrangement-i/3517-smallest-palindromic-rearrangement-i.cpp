class Solution {
public:
    string smallestPalindrome(string s) {
    int n=s.size();
    vector<int>hash(26,0);
    for(int i=0;i<n;i++)
    {
        hash[s[i]-'a']++;
    }  
    string str(n,' ');
    int left=0,right=n-1;

    for(int i=0;i<26;i++)
    {
       while(hash[i]>=2)
       {
        str[left++]=char('a'+i);
        str[right--]=char('a'+i);
        hash[i]-=2;
       }
       if(hash[i]==1)
       str[n/2]=char('a'+i);

    }
    return str;
    }
};