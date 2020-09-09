#include<bits/stdc++.h>
using namespace std;
vector<int>even;
vector<int>odd;
int main()
{
    int n,a,b,i,j,x,y,flag,sum,sub,evenn,oddn,evn,odn;

    while(scanf("%d",&n)==1)
    {
        oddn = 0;
        evenn = 0;
        sum = 0;
        even.clear();
        odd.clear();

        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);

            if(a%2==0)
            {
                evenn++;
                even.push_back(a);
            }
            else
            {
                oddn++;
                odd.push_back(a);
            }
            sum+=a;

        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        a = min(evenn,oddn);
        flag = 0;
        if(evenn>oddn)
        {
            while(1)
            {
                sum-=even.back();
                even.pop_back();
                evenn--;
                if(evenn==0)
                    break;
                if(oddn==0)
                    break;
                sum-=odd.back();
                odd.pop_back();
                oddn--;
            }

        }
        else if(oddn>evenn)
        {
            while(1)
            {
                sum-=odd.back();
                odd.pop_back();
                oddn--;
                if(oddn==0)
                    break;
                if(evenn==0)
                    break;

                sum-=even.back();
                even.pop_back();
                evenn--;

            }

        }
        else{
            printf("0\n");
            flag = 1;
        }

        if(flag==0)
        {
            printf("%d\n",sum);
        }

    }

    return 0;
}

