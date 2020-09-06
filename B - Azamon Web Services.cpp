#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ah,bh,ch;
    char str,str2;
    int t,n,m,a,b,i,j,x,y;

    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            cin>>ah>>bh;
            if(ah<bh)
            {
                cout<<ah<<endl;
                continue;
            }

            ch = ah;

            sort(ch.begin(),ch.end());

            n = ah.size();
            x = n;

            for(i=0; i<n; i++)
            {
                if(ah[i]!=ch[i])
                {
                    str = ch[i];
                    x = i;

                    break;
                }
            }

            for(i=n-1; i>x; i--)
            {
                if(ah[i]==str)
                {
                    swap(ah[x],ah[i]);
                    break;
                }
            }
            if(ah<bh)
            {
                cout<<ah<<endl;
            }
            else
            {
                cout<<"---"<<endl;
            }
        }

    }










    return 0;
}

