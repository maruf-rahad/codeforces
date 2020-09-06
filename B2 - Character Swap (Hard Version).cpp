#include<bits/stdc++.h>
using namespace std;
int ara[30];
vector<int>v;
vector<int>v2;
 
int main()
{
    int n,m,a,b,i,j,x,y,sum,t,flag,flag2;
    string s,s2;
    char ch,ch2;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d",&n);
 
            v.clear();
            v2.clear();
            sum = 0;
            flag = 0;
            memset(ara,0,sizeof(ara));
            cin>>s>>s2;
 
            for(i=0; i<n; i++)
            {
                a = s[i]-'a';
                ara[a]++;
                a = s2[i]-'a';
                ara[a]++;
            }
            for(i=0; i<28; i++)
            {
                if(ara[i]%2==1)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("No\n");
                continue;
            }
            for(i=0; i<n; i++)
            {
                flag2 = 0;
                if(s[i]!=s2[i])
                {
                    for(j=i+1; j<n; j++)
                    {
                        if(s[i]==s[j])
                        {
                            sum++;
                            v.push_back(j+1);
                            v2.push_back(i+1);
                            ch = s[j];
                            s[j] = s2[i];
                            s2[i] = ch;
                            flag2 = 1;
                            break;
                        }
                    }
                    if(flag2==0)
                    {
                        for(j=i+1; j<n; j++)
                        {
                            if(s[i]==s2[j])
                            {
                                sum+=2;
                                v.push_back(n);
                                v2.push_back(j+1);
                                ch = s2[j];
                                s2[j]=s[n-1];
                                s[n-1] = ch;
 
                                v.push_back(n);
                                v2.push_back(i+1);
                                ch = s[n-1];
                                s[n-1] = s2[i];
                                s2[i] = ch;
                                break;
                            }
                        }
                    }
                }
            }
            if(sum<=2*n)
            {
                printf("Yes\n%d\n",sum);
 
                for(i=0; i<sum; i++)
                {
                    printf("%d %d\n",v[i],v2[i]);
                }
            }
            else
                printf("No\n");
        }
    }
    return 0;
}