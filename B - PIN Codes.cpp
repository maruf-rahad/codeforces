#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int main()
{
    int t,a,b,i,j,x,y,n,m,k;
    string s;
    scanf("%d",&t);
    while(t--)
    {
        v.clear();
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            cin>>s;
 
            v.push_back(s);
        }
        int sum = 0;
 
        for(i=1; i<n; i++)
        {
 
            int flag = 0;
            for(k=0; k<n; k++)
            {
 
 
                for(j=0; j<n; j++)
                {
                    if(i!=j&&v[i]==v[j])
                    {
                        x = (v[i][0]-'0'+1)%10;
                        v[i][0] = x+'0';
                        flag = 1;
                    }
                }
            }
            if(flag==1)
                sum++;
        }
        printf("%d\n",sum);
        for(i=0; i<n; i++)
        {
            cout<<v[i]<<endl;
        }
    }
    return 0;
}