#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,m,a,b,i,j,t,x,y;

    scanf("%d",&t);

    while(t--)
    {
        cin>>s;
        n = s.size();
        int sum = 0,flag = 0;
        for(i=0;i<n;i++)
        {
            if(flag == 0&&s[i]=='1')
            {
                flag = 1;
                a = i;
            }
            else if(s[i]=='1')
            {
                sum+=i-a-1;
                a = i;
            }
        }
        printf("%d\n",sum);
    }












return 0;
}
