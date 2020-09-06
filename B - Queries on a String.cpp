#include<bits/stdc++.h>
using namespace std;
vector<char >v;
int main()
{
    string s2,s;
    int n,m,a,b,i,j,x,y,t,k;

      cin>>s2;
      s = ' ';
      s+=s2;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d %d %d",&a,&b,&k);
            v.clear();

            x = (b-a)+1;
            x = k%x;

            for(i=b-x+1;i<=b;i++)
            {
                v.push_back(s[i]);
            }
            for(i=b-x;i>=a;i--)
            {
                s[i+x] = s[i];
            }
            y = 0;

            for(i=a;i<=a+x-1;i++)
            {
                s[i] = v[y];
                y++;
            }

        }
        for(i=1;i<s.size();i++)
        {
            cout<<s[i];
        }
        printf("\n");














return 0;
}
