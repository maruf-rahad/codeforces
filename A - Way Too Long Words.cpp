    #include<stdio.h>
    #include<string.h>
     
    int main() {
        int n,l,i;
        char ch[101][101];
        scanf("%d",&n);
        for(i=0; i<n; i++) {
    	    scanf("%s",&ch[i]);
        }
        for(i=0;i<n;i++) {
    		l=strlen(ch[i]);
    		if (l>10)
    		    printf("%c%d%c\n",ch[i][0],l-2,ch[i][l-1]);
    		else
    		    printf("%s\n",ch[i]);
    	}
     
        return 0;
    }
