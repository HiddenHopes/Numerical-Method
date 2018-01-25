#include<string.h>
#include<stdio.h>
int a[4][4];
int det(){
    int a1,a2,a3,r;

    a1 = a[1][1]*(a[2][2]*a[3][3]-a[2][3]*a[3][2]);
    a2 = -a[1][2]*(a[2][1]*a[3][3] - a[2][3]*a[3][1]);
    a3 = a[1][3]*(a[2][1]*a[3][2] - a[2][2]*a[3][1]);
printf("a1:%d a2:%d a3:%d\n",a1,a2,a3);
    r = a1+a2+a3;
    return r;
}
int main(){
    int i,j;
freopen("in.txt","r",stdin);

    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
           scanf("%d",&a[i][j]);
        }
    }
    printf("det: %d\n", det());

return 0;
}
