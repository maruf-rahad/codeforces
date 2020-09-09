#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a,n,b,sum;
    while(scanf("%d",&n)==1)
    {
        a=0;
        while(n--)
        {
            cin>>s;
            if(s=="X++"||s=="++X")
            a++;
        else{
            a--;
        }

        }
        printf("%d\n",a);

    }








return 0;
}

