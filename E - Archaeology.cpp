#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;

    int i,lf,rt,siz;

    while(cin>>s)
    {
        siz = s.size();
            lf = 0;
            rt = siz-1;
            s2.clear();
            while(lf<=rt)
            {
                if(s[lf]==s[rt])
                {
                    s2+=s[lf];
                    lf++;
                    rt--;

                }
                else{
                    if(s[lf+1]==s[rt])
                    {
                        lf++;

                    }
                    else if(s[lf]==s[rt-1])
                    {
                        rt--;
                    }
                    else if(s[lf+1]==s[rt-1])
                    {
                        lf++;
                        rt--;

                    }
                }
            }

        cout<<s2;
        for(i=s2.size()-2;i>=0;i--)
        {
            cout<<s2[i];
        }
        printf("\n");
    }


return 0;
}

