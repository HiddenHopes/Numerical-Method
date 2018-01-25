#include<string.h>
#include<stdio.h>
long long int pwr(long long int x, long long int y){
    long long int i, p = 1;
    for(i=1;i<=y;i++){
        p = p*x;
    }
return p;
}
int main(){
    long long int a[2000], x[2000],u, r, n, sum, i, j, k;
    char c;
   freopen("in.txt","r",stdin);

    while(scanf("%lld%c",&a[0],&c)==2){
        i = 1; j = 1;
       if(c!='\n')
        while(scanf("%lld%c",&a[i++],&c)==2){
            if(c=='\n') break;
        }
        while(scanf("%lld%c",&x[j++],&c)==2){
            if(c=='\n') break;
        }
        u = 0;
        for(r = 1; r<j;r++){
        sum = 0;
        n = i - 1;
        for(k=0;k<i;k++){
            sum = sum + a[k]*pwr(x[r], n--);
        }
        if(u) printf(" ");
        printf("%lld", sum);
        u = 1;
        }
        printf("\n");
    }

return 0;
}
