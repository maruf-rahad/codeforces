#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,p;
    int flag,k,a,b,i,j,x,y,sum,tot;

    scanf("%d",&k);
    while(k--)
    {
        s.clear();
        t.clear();
        p.clear();
        cin>>s>>t>>p;

        i = 0;
        x = 0;
        j = 0;
        sum = 0;
        tot = 0;
        flag = 0;
        if(s.size()>t.size())flag = 1;
        for(i=0;i<s.size();i++)
        {
            for(j=x;j<t.size();j++)
            {
                if(s[i]==t[j])
                {
                    t[j] = '0';
                    sum++;
                    x = j+1;
                    break;
                }
            }
        }
        if(sum!=s.size())
        {
            flag = 1;
        }

        for(i=0;i<t.size();i++)
        {
            for(j=0;j<p.size();j++)
            {
                if(t[i]==p[j]&&t[i]!='0'&&p[j]!='0')
                {
                    p[j] = '0';
                    tot++;
                    break;
                }
            }
        }
       // printf("%d %d\n",sum,tot);
        if((sum+tot)<t.size())
        {
            flag = 1;
        }
        if(flag == 1)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }


    }





return 0;
}

