#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<int>even;
    vector<int>odd;

    int n,m,a,b,i,j,x,y,t;

    scanf("%d",&t);
    getchar();
    while(t--)
    {
        even.clear();
        odd.clear();
        cin>>s;

        int n = s.size();
        for(i=0;i<n;i++)
        {
            if((s[i]-'0')%2==0)even.push_back(s[i]-'0');
            else odd.push_back(s[i]-'0');
        }
        a = even.size();
        b = odd.size();
        i = 0;
        j = 0;
        while(1)
        {
            if(i>=a&&j>=b)break;

            if(i>=a)
            {
                x = 20;
            }
            else{
                x = even[i];
            }
            if(j>=b)
            {
                y = 20;
            }
            else{
                y = odd[j];
            }
            if(x>=y)
            {
                printf("%d",y);
                j++;
            }
            else{
                printf("%d",x);
                i++;
            }

        }
        printf("\n");
    }
return 0;
}
