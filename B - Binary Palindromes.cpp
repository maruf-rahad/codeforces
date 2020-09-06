#include<bits/stdc++.h>
using namespace std;
#define ll long long
int  main()
{

    int n,m,a,b,i,j,x,y,flag,one,zero,t,sum;
    vector<int>v;
    vector<int>v2;
    vector<pair<int,int> >vp;
    string s;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        one = 0;
        zero = 0;
        v.clear();
        v2.clear();
        for(i=1; i<=n; i++)
        {
            cin>>s;
            v2.push_back(s.size());
            for(j = 0; j<s.size(); j++)
            {
                if(s[j]=='0')
                {
                    zero++;
                }
                else
                {
                    one++;
                }
            }

        }
        for(i=0; i<v2.size(); i++)
        {
            if(v2[i]%2==0)
                v.push_back(v2[i]);
        }
        for(i=0; i<v2.size(); i++)
        {
            if(v2[i]%2==1)
                v.push_back(v2[i]);

        }
        sum = 0;
        for(i=0; i<v.size(); i++)
        {
            if(zero>=v[i])
            {
                zero-=v[i];
                sum++;
            }
            else if(one>=v[i])
            {
                one-=v[i];
                sum++;
            }
            else if(v[i]%2==0)
            {
                a = zero/2;
                b = one/2;
                if(a+b>=v[i]/2)
                {
                    sum++;
                    zero-=a*2;
                    one-=(v[i]-a*2);
                }
            }
            else if(v[i]%2==1)
            {
                if(zero+one==v[i]&&((zero%2==0&&one%2==1)||(zero%2==1&&one %2==0)))
                    sum++;
                else if(zero+one>v[i])
                {
                int x = 0;
                a = one;
                b = zero;

                x = 1;
                y = 0;
                while(x+y<v[i]&&a-2>=0)
                    {
                        x+=2;
                        a-=2;
                    }
                    while(x+y<v[i]&&b-2>=0)
                    {
                        b-=2;
                        y+=2;
                    }
                    if(x+y==v[i])
                    {
                        one -= x;
                        zero -=y;
                        sum++;
                        continue;
                    }
                    else
                    {
                        a = one;
                        b = zero;

                        x = 0;
                        y = 1;
                        while(x+y<v[i]&&b-2>=0)
                        {
                            b-=2;
                            y+=2;
                        }
                        while(x+y<v[i]&&a-2>=0)
                        {
                            x+=2;
                            a-=2;
                        }
                        if(x+y==v[i])
                        {
                            one-=x;
                            zero-=y;
                            sum++;
                        }

                    }

                }
            }

        }


    printf("%d\n",sum);


}

return 0;
}
