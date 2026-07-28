class Solution {
public:
    string reverseWords(string s) {
    string str="";
    string word="";
    int n=s.size();
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]!=' ')
        {
            word=s[i]+word;
        }
        if((s[i]==' ' || i==0 ) && !word.empty() )
        {
             if(!str.empty())
             {
                str+=' ';
             }
            str+=word;
            word="";
        }
    

    } 
    return str;   
    }
};