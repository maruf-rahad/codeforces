#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,x,y,flag,sum,n;

    string s;

    while(cin>>n)
    {
        cin>>s;
        if(n%2==1)
        {
            cout<<1<<endl<<s<<endl;
        }
        else
        {

            flag = 0;
            a = 0;
            b = 0;
            for(i=0; i<s.size(); i++)
            {
                if(s[i]=='0')
                    a++;
                else
                {
                    b++;
                }
            }
            if(a!=b)
            {
                printf("1\n");
                cout<<s<<endl;
            }
            else
            {

                printf("2\n");
                cout<<s[0]<<" ";
                for(j=1; j<n; j++)
                {
                    cout<<s[j];
                }
                cout<<endl;


            }

        }
    }

        return 0;
    }

