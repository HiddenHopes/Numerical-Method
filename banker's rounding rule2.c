#include<string.h>
#include<stdio.h>
#include <stdlib.h>
int main(){
    char s[30], u[30], v[30];
    double n, m;
    int i, k, r, fnzd, length;
freopen("bnk.txt","r",stdin);
    while(scanf("%s",s)==1){
        n = atof(s);
        length = strlen(s);
        //printf("round off to: ");
        scanf("%d",&r);
        for(i=0;i<length;i++){
            if(s[i]!='0'&&s[i]!='.') {fnzd = i; break;}
        }
        for(i=0;i<=r;i++){
            u[i] = s[fnzd+i];
            v[i] = s[fnzd+i];
            if(s[fnzd+i]=='.') r=r+1;
        }

        u[i] = '\0';
        v[i-1] = '\0';
        if(u[i-1]>'5') v[i-2]=v[i-2]+1;
        else if(u[i-1]=='5'&&u[i-2]%2==1) v[i-2]=v[i-2]+1;
        printf("\n%s %.10lf %s ans = %s\n",s,n,u,v);
    }

return 0;
}
