
#include<bits/stdc++.h.>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y,sum;
    char str;

    while(scanf("%d",&n)==1)
    {
        getchar();

        stack<char>stk;
      //  printf("%d\n",n);
        sum = 0;
        int flag = 0;
        if(n%2==1)
        {
            flag = 1;
        }

        for(i=1;i<=n;i++)
        {
            scanf("%c",&str);
            if(stk.size()==0)
            {
                stk.push(str);

            }
            else if(stk.top()=='('&&str==')'){
                stk.pop();
            }
            else{
                stk.push(str);
            }
        }
       // printf("%d %d\n",stk.size(),sum);
        if(stk.size()==0&&flag==0)
        {
            printf("Yes\n");
        }
        else if(stk.size()==2&&flag==0)
        {
            char ah = stk.top();
            stk.pop();
            char bh = stk.top();
            stk.pop();
            if(ah!=bh)
            {
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        else{
            printf("No\n");
        }
    }











return 0;
}
