#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t,n,m,a,b,i,j,x,y,flag,sum;
    string s;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        cin>>s;
        sum = 0;


            flag = 0;
            for(i=0;i<n;i++)
            {
                a=s[i]-'0';
                sum+=a;
            }



            vector<int>v;
            for(i=n-1;i>=0;i--)
            {
                a = s[i]-'0';
                //  printf("%d %d\n",sum,a);
                if(a%2==1&&sum%2==0)
                {
                    flag = 1;
                    break;
                }
                else{
                    s.pop_back();
                    sum-=a;
                }
            }
            if(flag==1)
            {
                cout<<s<<endl;
            }
            else{
                printf("-1\n");
            }



    }










return 0;
}
