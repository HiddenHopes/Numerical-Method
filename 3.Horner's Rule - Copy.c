#include<string.h>
#include<stdio.h>

int main(){
    int a[20], p, n, x, k;
    char c;

freopen("in.txt","r",stdin);

        scanf("%d\n",&x);
        n = 0;
        while(scanf("%d%c",&a[n],&c)==2){
            printf("%d%c",a[n],c);
            if(c=='\n') break;
            n++;
        }
    printf("n=%d\n\n", n);

    p = a[0];
        for(k=1;k<=n;k++){
            p = p*x+a[k];
        }

        printf("%d\n", p);

return 0;
}
