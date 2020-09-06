#include<bits/stdc++.h>
using namespace std;
char s[2000];
int main()
{
    int n,t,a,b,i,j;

    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%s",&s);

            n =strlen(s);

            if(s[n-1]=='o'&&s[n-2]=='p')
            {
                printf("FILIPINO\n");
            }
            else if((s[n-1]=='u'&&s[n-2]=='s'&&s[n-3]=='e'&&s[n-4]=='d')||(s[n-1]=='u'&&s[n-2]=='s'&&s[n-3]=='a'&&s[n-4]=='m'))
            {
                printf("JAPANESE\n");
            }
            else if(s[n-1]=='a'&&s[n-2]=='d'&&s[n-3]=='i'&&s[n-4]=='n'&&s[n-5]=='m')
            {
                printf("KOREAN\n");
            }



        }



    }










return 0;
}
