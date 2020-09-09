#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[200500],ch2[200500];
    int a,b,i,j,x,y,c,d;

    scanf("%s",&ch);
    scanf("%s",&ch2);
    c = strlen(ch);
    d = strlen(ch2);
    a = c-1;
    b = d-1;
    x = 0;
    while(1)
    {
        if(ch[a]==ch2[b])
        {
            x++;
            a--;
            b--;
            if(b<0||a<0)break;
        }
        else{
            break;
        }
    }
        y = c-x+d-x;
        printf("%d\n",y);



return 0;
}

