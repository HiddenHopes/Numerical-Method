#include<stdio.h>
#include<math.h>

int main(){
    int k,a,b;
    char c;
    scanf("%d",&k);
        scanf("%d%c",&a,&c);
        printf("q(x):");
        while(c!='\n'){
            printf(" %d",a);
            scanf("%d%c",&b,&c);
            a = b + (a*k);
        }
        printf("\n");
        printf("r = %d\n\n",a);


return 0;
}
