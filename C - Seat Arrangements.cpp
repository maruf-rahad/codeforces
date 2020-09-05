    #include<bits/stdc++.h>
    using namespace std;
    char ch[2010][2010];

    int main()
    {
        int n,m,k,sum,x,y,flag,tot,i,j;

        while(scanf("%d %d %d",&n,&m,&k)==3)
        {
            tot = 0;
            getchar();
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++)
                {
                    scanf("%c",&ch[i][j]);
                }
                getchar();
            }

                for(i=1; i<=n; i++)
                {
                    sum = 0;
                    for(j=1; j<=m; j++)
                    {
                        if(ch[i][j]=='.')
                            sum++;
                        else
                        {
                            if(sum>=k)
                            {
                                tot+= sum-k+1;
                            }
                            sum = 0;
                        }
                    }
                    if(sum>=k)
                    {
                        tot += sum-k+1;
                    }

                }


                for(i=1; i<=m; i++)
                {
                    sum = 0;
                    for(j=1; j<=n; j++)
                    {
                        if(ch[j][i]=='.')
                            sum++;
                        else
                        {
                            if(sum>=k)
                            {
                                tot += sum-k+1;
                            }
                            sum = 0;
                        }
                    }
                    if(sum>=k)
                    {
                        tot+= sum-k+1;
                    }
                }

            if(k==1)tot/=2;

            printf("%d\n",tot);
        }












        return 0;
    }


