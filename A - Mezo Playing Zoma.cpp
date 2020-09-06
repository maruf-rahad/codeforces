#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    char ch;
    string s,s2;
    int t,n,m,a,b,i,j,x,y;
    scanf("%d",&n);

    cin>>s;
    a = 0;
    b = 0;
    m = s.size();
    for(i=0;i<m;i++)
    {
        if(s[i]=='L')
        {
            a++;
        }
        else{
            b++;
        }
    }
    printf("%d\n",a+b+1);











return 0;
}

