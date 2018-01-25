#include<string.h>
#include<stdio.h>

int main(){
    int i, fnzd, lnzd, length, dot, sd;
    char s[100];


    while(scanf("%s",s)==1){
        dot = -1;
        length = strlen(s);
        for(i=0;i<length;i++){
            if(s[i]=='.') {dot = i; break;}
        }
        if( dot != -1){
            for(i=0;i<length;i++){
                if(s[i]>'0') {fnzd = i; break;}
            }

            if(dot>fnzd) sd = length - fnzd - 1;
            else sd = length - fnzd;
        }
        else {
            for(i=0;i<length;i++){
                if(s[i]!='0') {fnzd = i; break;}
            }
            for(i=length-1;i>=0;i--){
                if(s[i]!='0') {lnzd = i; break;}
            }
            sd = lnzd - fnzd + 1;
        }
        printf("\n%s contains %d significant digits\n",s,sd);
    }

return 0;
}
