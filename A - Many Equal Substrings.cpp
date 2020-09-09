#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,c,d,sum,n,m;
    char ch[100];

    while(cin>>n>>m)
    {
        scanf("%s",&ch);
         sum = 0;

        int length = strlen(ch);
        int flag = 0;
        for(i=1;i<length;i++)
        {
                sum = 0;
            if(ch[0]==ch[i])
            {
                a = 0;

                for(j = i;j<length;j++)
                {
                    if(ch[j]==ch[a])
                    {
                        sum++;
                        a++;



                    }
                    else{
                        break;
                    }
                     if(j==length-1)
                        {
                            flag = 1;
                            break;
                        }

                }
            }
            if(flag==1)
            {
                break;
            }
        }

        printf("%s",ch);
        for(i=1;i<m;i++)
        {
            for(j=sum;j<length;j++)
            {
                printf("%c",ch[j]);
            }
        }
        cout<<endl;

    }


return 0;
}

