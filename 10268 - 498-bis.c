#include<string.h>
#include<stdio.h>

int main(){
    long long int a[200000], sum, r, n, x, k, i;
    char c;

freopen("in.txt","r",stdin);
    while(scanf("%lld\n",&x)==1){
        sum = 0; n = 0;
        while(scanf("%lld%c",&a[n++],&c)==2){
            if(c=='\n') break;
        }
        if(n==1) {printf("0\n");continue;}
        r = n - 1;
        n = n - 2;

        for(k=0;k<n;k++){
            sum = (sum + a[k]*r)*x;
            r--;
        }
        sum = sum + a[k];
        printf("%lld\n", sum);
    }

return 0;
}
