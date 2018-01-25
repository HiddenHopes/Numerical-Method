#include<string.h>
#include<stdio.h>

int main(){
    int a[20], b, n, r, k;
    char c;

freopen("in.txt","r",stdin);

        scanf("%d\n",&r);
        n = 0;
        while(scanf("%d%c",&a[n],&c)==2){
            printf("%d%c",a[n],c);
            if(c=='\n') break;
            n++;
        }
    printf("n=%d\n\n", n);

    b = 0;
        for(k=0;k<n;k++){
            b = b*r+a[k];printf("%d ", b);
        }



return 0;
}
