#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ara[5][120];

    int ara2[5],a,b,i,j,x,y;

    for(i=1;i<=4;i++)
    {
        scanf("%s",&ara[i]);
        ara2[i] = strlen(ara[i])-2;
    }
    a = *max_element(ara2+1,ara2+5);
    b = *min_element(ara2+1,ara2+5);



    for(i=1;i<=4;i++)
    {

        if(ara2[i]==a)
        {
            x = i;
        }
        if(ara2[i]==b)
        {
            y = i;
        }
    }
    //printf("%d %d %d %d\n",a,x,b,y);

    int flag = 0,sum=0,sub=0;


    for(i=1;i<=4;i++)
    {

        if(a>=ara2[i]*2&&x!=i)
        {
            sum++;

        }
        if(b*2<=ara2[i]&&y!=i)
        {
            sub++;
        }
    }


    if(sum==3&&sub!=3)
    {
        printf("%c\n",'A'+x-1);
        flag = 1;
    }
    else if(sub==3&&sum!=3)
    {
        printf("%c\n",'A'+y-1);
    }
    else{
        printf("C\n");
    }







return 0;
}

