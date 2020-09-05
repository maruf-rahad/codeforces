    #include<bits/stdc++.h>
    using namespace std;
    char ara[20][20];
    int main()
    {
        int t,n,m,i,j;
        scanf("%d",&t);
        while(t--)
        {
            for(i=1;i<=9;i++)
            {
     
                    scanf("%s",&ara[i]);
     
            }
     
            for(i=1;i<=9;i++)
            {
                for(j=0;j<9;j++)
                {
                    if(ara[i][j]=='1')ara[i][j] = '2';
                }
                printf("%s\n",ara[i]);
            }
     
     
        }
     
     
     
     
     
     
     
     
     
     
    return 0;
    }
