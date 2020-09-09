#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,n;
    char ch[6][100] = {"purple","green","blue","orange","red","yellow"};
    char ch2[6][100] = {"Power","Time","Space","Soul","Reality","Mind"};
        char str[6][10];
        a=0;
        b=0;
        int ara[6]={0,0,0,0,0,0};
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%s",str[i]);
        }
        for(j=0;j<n;j++){
            for(i=0;i<6;i++)
            {
                if(strcmp(str[j],ch[i])==0)
                {
                    ara[i]=1;
                    a++;
                    b++;

                }

            }
        }
            printf("%d\n",6-a);
            for(i=0;i<6;i++)
            {
                if(ara[i]==0)
                {
                    printf("%s\n",ch2[i]);

                }
                }






return 0;
}
}
