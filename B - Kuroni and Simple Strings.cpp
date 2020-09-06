#include<bits/stdc++.h>
using namespace std;
#define ll long long

stack<pair<char,int> >stk;
vector<int>v;
int main()
{
    int a,b,n,m,t,i,j,x,y,sum,mx,mn;
    char str;
    string s,s2;

    while(cin>>s)
    {

        int l = s.size();
        v.clear();
        i = 0;
        j = l-1;
        int flag = 0;
        while(i<j)
        {
            if(flag==0&&s[i]=='(')
            {
                a = i;
                flag=1;
            }
            if(flag==1&&s[j]==')')
            {
                b = j;
                flag = 0;
                v.push_back(a);
                v.push_back(b);
                j--;
            }
            if(flag==0)
                i++;
            if(flag==1)
                j--;
        }
        if(v.size())
        {
            printf("1\n");
            printf("%d\n",v.size());
            sort(v.begin(),v.end());

            for(i=0; i<v.size(); i++)
            {
                printf("%d ",v[i]+1);
            }
            printf("\n");
        }
        else{
            printf("0\n");
        }

    }










    return 0;
}
