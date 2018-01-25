#include<string.h>
#include<stdio.h>
#include <stdlib.h>
int main(){
    char s[30];
    int i, r, dot, fnzd, length;
freopen("bnk.txt","r",stdin);
    while(scanf("%s",s)==1){
        length = strlen(s);
//printf("round off to: ");
        scanf("%d",&r);
        for(i=0;i<length;i++){
            if(s[i]!='0'&&s[i]!='.') {fnzd = i; break;}
        }
        dot = -1;
        for(i=0;i<length;i++){
            if(s[i]=='.') {dot = i; break;}
        }

        if(dot<fnzd){
            if(s[fnzd+r]>'5') {s[fnzd+r-1]=s[fnzd+r-1]+1;s[fnzd+r]='\0';}
            else if(s[fnzd+r]=='5'&&s[fnzd+r-1]%2==1) {s[fnzd+r-1]=s[fnzd+r-1]+1;s[fnzd+r]='\0';}
            else s[fnzd+r]='\0';
        }
        else {
            if(s[fnzd+r+1]>'5') {s[fnzd+r]=s[fnzd+r]+1;s[fnzd+r+1]='\0';}
            else if(s[fnzd+r+1]=='5'&&s[fnzd+r]%2==1) {s[fnzd+r]=s[fnzd+r]+1;s[fnzd+r+1]='\0';}
            else s[fnzd+r+1]='\0';
        }
        printf("\nround off to %d significant digits:  %s\n",r, s);
    }

return 0;
}
