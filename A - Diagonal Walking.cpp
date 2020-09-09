#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j;
    while(scanf("%d",&n)==1)
    {
        int sum = 0;
        string s;
        cin>>s;

        for(i=1;i<s.size();i++)
        {

            if(s[i]!=s[i-1])
            {

                sum++;
                i++;
            }
        }


        a = s.size()-sum;
        printf("%d\n",a);

    }









return 0;
}
