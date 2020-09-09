#include<bits/stdc++.h>
using namespace std;
stack<char>stk;
map<int,int>mange;
map<int,int>change;
map<int,int> :: iterator it;
string s,ch,str;
int x;

void zero()
{
    while(!stk.empty())
    {
        stk.pop();
    }
}

void jingalala(string s2)
{
    char a,nw;

    for(int i = 0;i<s2.size();i++)
    {
         a = s[i];

        int b = stk.size();


        if(b==0)
        {

            stk.push(a);
        }
        else if(stk.top()=='('&&a==')')
        {

            stk.pop();
        }
        else{

            stk.push(a);
        }
    }
    int flag = 0,sz;


    sz = stk.size();

    if(sz!=0)
    {
     nw = stk.top();

    }



        while(!stk.empty())
        {
             a = stk.top();
             if(a!=nw)
             {
                 flag = 1;
                 break;
             }
             stk.pop();

        }
        //printf("%d  %d    %c\n",flag,sz,nw);

      if(flag ==0&&sz==0)
      {
          x++;
      }
      if(flag==0&&a=='('&&mange.find(sz)==mange.end())
      {
          mange[sz] = 1;
      }
      else if(flag==0&&a=='('&&mange.find(sz)!=mange.end())
        {
            mange[sz]++;
        }
        else if(flag==0&&a==')'&&change.find(sz)==change.end())
        {
            change[sz] = 1;
        }
        else if(flag==0&&a==')'&&change.find(sz)!=change.end())
        {
            change[sz]++;
        }
}
int main()
{
    int n,b,i,j,y,z,sum;

    while(scanf("%d",&n)==1)
    {
        mange.clear();
        change.clear();
        x = 0;
        sum = 0;
        for(i=1;i<=n;i++)
        {
            zero();
            cin>>s;

            jingalala(s);
        }

        for(it = mange.begin();it!=mange.end();it++)
        {
            y = it->first;
            z = it->second;
            if(change.find(y)!=change.end())
            {
                sum = sum+min(z,change[y]);
            }
        }

        printf("%d\n",sum+x/2);





    }








return 0;
}

