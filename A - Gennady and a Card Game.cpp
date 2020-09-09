#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,sum,x,y,flag;

    string ch1,ch2,ch3,ch4,ch5,ch6,s;

    while(cin>>ch1)
    {
        flag = 0;
        for(i=1;i<=5;i++)
        {
            cin>>s;
            if(s[0]==ch1[0])
            {
                flag = 1;
            }
            if(ch1[1]==s[1])
            {
                flag = 1;
            }
        }
        if(flag==1)
        {
            printf("YES\n");
        }
        else{
        printf("NO\n");
        }


    }







return 0;
}

