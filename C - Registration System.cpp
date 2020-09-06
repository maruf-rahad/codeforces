#include<bits/stdc++.h>
using namespace std;


struct node
{
    int num;
    bool endmark;
    node *next[27];

    node()
    {
        endmark = false;
        num = 0;
        for(int i=0; i<=26; i++)
        {
            next[i] = NULL;
        }
    }
};
node *root;


bool search(char *str,int len)
{
    node *curr = root;
    for(int i=0; i<len; i++)
    {
        int id = str[i]-'a';
       // printf("%d\n",id);
        if(curr->next[id]==NULL)
        {
            return false;
        }
        else
        {
            curr = curr->next[id];
        }
    }

    if(curr->endmark)
    {
        curr->num++;
        printf("%s%d\n",str,curr->num);
        return true;
    }
    return false;
}

void insert(char* str,int len)
{
    node* curr = root;
    for(int i=0; i<len; i++)
    {
        int id = str[i]-'a';
        if(curr->next[id]==NULL)
        {
            curr->next[id] = new node();
        }
        curr = curr->next[id];
    }
    curr->endmark = true;

}

void del(node *curr)
{
    for(int i=0; i<=26; i++)
    {
        if(curr->next[i]!=NULL)
            del(curr->next[i]);

    }
    delete(curr);
}
int main()
{
    char ch[100];
    int n,i;
    while(scanf("%d",&n)==1)
    {
        getchar();
        root = new node();
        for(i=1; i<=n; i++)
        {
            scanf("%s",&ch);
            if(!search(ch,strlen(ch)))
            {
                printf("OK\n");
                insert(ch,strlen(ch));
            }
        }
        del(root);
    }











    return 0;
}

