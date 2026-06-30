class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
        else
        return false;
    }
    long long countVowels(string word) {
    long long ans=0;
    long long n=word.size();
    for(int i=0;i<n;i++)
    {
        if(isVowel(word[i]))
        ans+=(i+1)*(n-i);
    }
      return ans;
    }
};