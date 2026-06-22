class Solution {
public:
    int maxNumberOfBalloons(string text) {
    int n=text.size();
    unordered_map<char, int> mp = {
            {'b', 0}, {'a', 0}, {'l', 0},
            {'o', 0}, {'n', 0}
        };
    for(auto ch:text)
    {
     if(ch=='a' || ch=='b' || ch=='l' || ch=='o' || ch=='n')
     {
        mp[ch]++;
     }

    }   
    int mini=0;
    for(auto it:mp)
    {
        if(it.second==0)
        return 0;
       int b = mp['b'];
int a = mp['a'];
int l = mp['l']/2;
int o = mp['o']/2;
int n = mp['n'];
  mini=min(a,min(b,min(l,min(o,n))));
    } 
    return mini;
    }
};