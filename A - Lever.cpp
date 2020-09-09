#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,a,b,i,j,x,y,sum,c;

    string s;

    while(cin>>s)
    {




        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='^')
            {
                a = i+1;
                break;
            }
        }
        sum = 0;
        for(i=0; i<a-1; i++)
        {
            if(s[i]=='=')
            {
                continue;
            }
            b = i+1;
            c = s[i]-'0';
            sum = sum-c*(a-b);


        }

        for(i=s.size()-1; i>=a; i--)
        {
            if(s[i]=='=')
            {
                continue;
            }
            b = i+1;
            c = s[i]-'0';
            sum = sum+c*(b-a);




        }
        if(sum<0)
        {
            printf("left\n");
        }
        else if(sum>0)
        {
            printf("right\n");
        }
        else
        {
            printf("balance\n");
        }



    }












    return 0;
}

