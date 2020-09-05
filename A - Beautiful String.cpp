#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    int t,flag,a,b,i,sz;

    scanf("%d",&t);
    while(t--)
    {
        cin>>s;
        flag = 0;
        sz = s.size();
        if(sz==1&&s[0]=='?')
        {
                cout<<"a"<<endl;
                continue;
        }
        else if(s[0]=='?'&&s[1]=='a')s[0] = 'b';
        else if(s[0]=='?'&&s[1]=='b')s[0] = 'a';
        else if(s[0]=='?'&&s[1]=='c')s[0] = 'a';
        else if(s[0]=='?'&&s[1]=='?')s[0] = 'a';


        for(i=1;i<sz-1;i++)
        {
            if(s[i]=='?')
            {
                if(s[i-1]!='b'&&s[i+1]!='b')s[i] = 'b';
                else if(s[i-1]!='a'&&s[i+1]!='a')s[i] = 'a';
                else if(s[i-1]!='c'&&s[i+1]!='c')s[i] = 'c';
                else flag = 1;
            }
            else if(s[i-1]==s[i]||s[i+1]==s[i])flag = 1;
        }
        if(s[sz-1]=='?'&&s[sz-2]=='a')s[sz-1] = 'b';
        else if(s[sz-1]=='?'&&s[sz-2]=='b')s[sz-1] = 'a';
        else if(s[sz-1]=='?'&&s[sz-2]=='c')s[sz-1] = 'a';
        if(flag)
            cout<<"-1\n";
        else
            cout<<s<<endl;

    }












return 0;
}
