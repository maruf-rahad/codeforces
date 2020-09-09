#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[300000];
    char ch2[300000];
    int a,b,c,d,j,i,flag,flag2,n,m,l1,l2;

    while(scanf("%d %d",&n,&m)==2)
    {
        scanf("%s %s",&ch,&ch2);

        l1 = strlen(ch);
        l2 = strlen(ch2);
        i = 0;
        j = 0;
        flag = 0;
        flag2 = 0;
        while(i!=l1&&i!=l2)
        {
            if(ch[i] == '*')
            {
                a = i;
                flag = 1;
                break;
            }

            if(ch[i]!=ch2[i])
            {
                flag2 = 1;
                break;

            }
            i++;

        }

        if(flag==1)
        {
            if(l1>l2+1)
            {
                flag2 = 1;
            }
        b = 0;
        while(ch[b]!='*'&&flag2==0)
        {
            if(ch[b]!=ch2[b])
            {
                flag2 = 1;
                break;
            }
            b++;

        }
        b = l1-1;
        c = l2-1;
        while(ch[b]!='*'&&flag2==0)
        {
            if(ch[b]!=ch2[c])
            {
                flag2 = 1;
                break;
            }
            b--;
            c--;
        }


        }
        else
        {
            if(ch[l1-1]=='*')
            {
                for(i=0;i<l1-1;i++)
                {
                    if(ch[i]!=ch2[i])
                    {
                        flag2=1;
                       break;
                    }
                }
            }
            else if(strcmp(ch,ch2)!=0)
            {
                flag2 = 1;
            }

        }



        if(flag2==1)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;

}

