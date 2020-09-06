#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    char ch[2000000];
    int n,t,a,b,i,j,x,y;

    scanf("%d",&t);
    while(t--)
    {
        v.clear();
        scanf("%s",&ch);
        int s = strlen(ch);

        for(i=0;i<s-1;i++)
        {
            if(i+4<s&&ch[i]=='t'&&ch[i+1]=='w'&&ch[i+2]=='o'&&ch[i+3]=='n'&&ch[i+4]=='e')
            {
                v.push_back(i+2+1);
                ch[i+2] = 'z';
            }
            else if(i+2<s&&ch[i]=='t'&&ch[i+1]=='w'&&ch[i+2]=='o')
            {
                v.push_back(i+1+1);
                ch[i+1] = 'z';
            }
            else if(i+2<s&&ch[i]=='o'&&ch[i+1]=='n'&&ch[i+2]=='e')
            {
                v.push_back(i+1+1);
                ch[i+1] = 'z';
            }
        }

        printf("%d\n",v.size());

        for(i=0;i<v.size();i++)
        {
            printf("%d ",v[i]);
        }

        printf("\n");
    }








return 0;
}
