#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y,flag,t,sum;
    string s;


    scanf("%d",&t);

    while(t--)
    {
        cin>>s;
        int l = s.size();
        x = 0;
        flag = 0;

        for(i=0; i<l/2; i++)
        {


                if(s[i]!=s[l-i-1])
                {
                    x = 1;
                    flag = 1;
                    cout<<s<<endl;
                    break;
                }

        }
        if(flag==0)
        {
            sum = 1;

            for(i=1;i<s.size();i++)
            {
                if(s[i]==s[i-1])
                {
                    sum++;
                }
            }
            if(sum==s.size())
            {
                printf("-1\n");
                flag = 1;
            }

        }
        if(flag==0)
        {
            sort(s.begin(),s.end());

                cout<<s<<endl;

        }



    }












            return 0;
    }
