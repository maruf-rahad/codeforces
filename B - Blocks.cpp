#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[222];
    int t,n,m,a,b,i,j,x,y;

    while(scanf("%d",&n)==1)
    {
        vector<int>v;
        getchar();

        scanf("%s",&ch);

        x = 0;
        y = 0;

        for(i=0; i<n; i++)
        {
            if(ch[i]=='W')
                x++;
            else
                y++;
        }

        if(x%2==1&&y%2==1)
        {
            printf("-1\n");
            continue;
        }
        else if(x==n||y==n)
        {
            printf("0\n");
            continue;
        }
        if(x%2==0)
        {

            x = 0;

            for(i=0; i<n-1; i++)
            {
                if(ch[i]=='W'&&ch[i+1]=='W')
                {
                    x++;

                    v.push_back(i+1);
                    i++;
                }
                else if(ch[i]=='B')
                    continue;
                else if(ch[i]=='W'&&ch[i+1]=='B')
                {
                    x++;
                    v.push_back(i+1);

                    ch[i+1] = 'W';
                }
            }
        }
        else{
            x = 0;
            for(i=0;i<n-1;i++)
            {
                if(ch[i]=='W')
                {
                    continue;
                }
                else if(ch[i]=='B'&&ch[i+1]=='B')
                {
                    v.push_back(i+1);

                    x++;
                    i++;
                }
                else if(ch[i]=='B'&&ch[i+1]=='W')
                {
                    x++;
                    v.push_back(i+1);

                    ch[i+1] = 'B';
                }


            }


        }

        printf("%d\n",x);

        for(i=0; i<x; i++)
        {
            printf("%d ",v[i]);
        }
        printf("\n");






    }








    return 0;
}
