#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ch;

    int a,b,i,j,sum,k;

    while(cin>>s)
    {
        cin>>ch;

        sum = 1;

        k = 0;
        i = 0;
        j = 0;

        while(1)
        {
            if(s[i]==ch[j])
            {
                sum++;
                i++;
                j++;
            }
            else{
                j++;
            }
            if(i==s.size()-1||j==ch.size())
                break;
        }


        printf("%d\n",sum);

    }

return 0;
}

