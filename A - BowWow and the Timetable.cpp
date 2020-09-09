#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,m,a,b,l,i;

    while(cin>>s)
    {
        l = s.size();


        int flag = 0;
        for(i=1; i<l; i++)
        {
            if(s[i]=='1')
            {
                flag = 1;
            }
        }
        if(l%2==0)
        {
            printf("%d\n",l/2);
        }
        else if(flag==1)
        {
            printf("%d\n",l/2+1);
        }
        else{
            printf("%d\n",l/2);
        }
    }













    return 0;
}

