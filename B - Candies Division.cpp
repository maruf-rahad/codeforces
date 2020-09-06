#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
int main()
{
    int n,m,t,a,b,i,j,x,y,sum,flag;
    string s,s2;
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        a = n%m;
        b = n/m;
        if(a>m/2)
        {
            a = m/2;
        }
        printf("%d\n",b*m+a);

    }











return 0;
}
