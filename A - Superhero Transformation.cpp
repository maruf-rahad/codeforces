#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    char a,b;
    int i;
    while(cin>>s1)
    {
        cin>>s2;


        int flag = 0,flag2 = 0,flag3 = 0;
        if(s1.size()!=s2.size())
        {
            flag = 1;
        }
        else{
            for(i=0;i<s1.size();i++)
            {
                a = s1[i];
                b = s2[i];
                if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
                   {
                       flag2 = 0;
                   }
                   else{
                    flag2 = 1;
                   }
                   if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
                   {
                       flag3 = 0;
                   }
                   else{
                    flag3 = 1;
                   }

                   if(flag2!=flag3)
                   {
                       flag =1;
                       break;
                   }



            }
        }
        if(flag==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }


    }









return 0;
}

