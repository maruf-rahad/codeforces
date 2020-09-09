#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y;

    string s;
    char str;

    while(scanf("%d",&n)==1)
    {
        cin>>s;

        b = 0;
        a = 0;
        for(i=0;i<s.size()-1;i++)
        {
            if(s[i]>s[i+1]&&b==0)
            {
                a = i;
                b = 1;
            }
        }
        if(b==0)
        {
            for(i=0;i<s.size()-1;i++)
            {
                printf("%c",s[i]);
            }

        }
        else{
            for(i=0;i<s.size();i++)
            {
                if(a==i)continue;

                else{
                    printf("%c",s[i]);
                }
            }
        }
        printf("\n");
    }


return 0;
}

