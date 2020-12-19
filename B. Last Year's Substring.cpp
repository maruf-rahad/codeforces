#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a,b,i,j,x,y,flag;
    string s,s2;
    scanf("%d",&t);
    while(t--)
    {
        s2 = "2020";
        flag = 0;
        cin>>n>>s;

        j=0;
        for(i=0; i<s2.size(); i++)
        {
            if(s[i]==s2[j])
                j++;
            else
            {
                break;
            }
        }
        if(j==4)
            flag = 1;
        else
        {
            for(i=n-(4-j); i<n; i++)
            {
                if(s[i]==s2[j])
                    j++;
            }
            if(j==4)flag = 1;

        }
        if(flag==1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }


    }







    return 0;
}
