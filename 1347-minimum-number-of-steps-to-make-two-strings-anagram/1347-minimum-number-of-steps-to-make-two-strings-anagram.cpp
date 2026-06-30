class Solution {
public:
    int minSteps(string s, string t) {
    int n=s.size();
    int cnt=0;
    unordered_map<char,int>mp;
    for(auto it:s)
    {
        mp[it]++;
    } 

    for(auto it:t)
    {

            if(mp[it]>0)
            mp[it]--;
            else
            cnt++;
    }
        return cnt;
    }
};