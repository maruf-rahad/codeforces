#include<bits/stdc++.h>
using namespace std;
int main()
{
      vector<int>v;
    int n,m,a,b,i,j;
    char ch[100];
    int ara[30];
    int ara2[30];

    while(scanf("%d %d",&n,&m)==2)
    {
        scanf("%s",&ch);

        int l = strlen(ch);

        int sum = 0,flag = 0,total = 0,x;

        for(i=0;i<30;i++)
        {
            ara[i] = 0;
        }

        for(i = 0;i<l;i++)
        {
            a = ch[i] - 96;

            ara[a]++;
        }

        for(i=1;i<30;i++)
        {
            if(ara[i]>0)
            {

               sum++;
               total+=i;
               i++;
               if(sum==m){
                flag = 1;
                break;
               }
            }
        }

        if(flag == 0)
        {
            printf("-1\n");
        }
        else{
            printf("%d\n",total);
        }

    }
return 0;
}

