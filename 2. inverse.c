#include<stdio.h>
int a[10];
int det(int p[]){
    int r;
    r = p[1]*(p[5]*p[9]-p[6]*p[8])-p[2]*(p[4]*p[9]-p[6]*p[7])+p[3]*(p[4]*p[8]-p[5]*p[7]);
    return r;
}

void inv(int p[]){
    int dA,i,j;
    dA = det(p);
    printf("det of A: %d\n", dA);
    a[1] = (p[5]*p[9]-p[6]*p[8])/dA;
    a[2] = (p[6]*p[7]-p[4]*p[9])/dA;
    a[3] = (p[4]*p[8]-p[5]*p[7])/dA;
    a[4] = (p[3]*p[8]-p[2]*p[9])/dA;
    a[5] = (p[1]*p[9]-p[3]*p[7])/dA;
    a[6] = (p[2]*p[7]-p[1]*p[8])/dA;
    a[7] = (p[2]*p[6]-p[3]*p[5])/dA;
    a[8] = (p[3]*p[4]-p[1]*p[6])/dA;
    a[9] = (p[1]*p[5]-p[2]*p[4])/dA;
    printf("inverse matrix:\n");
    for(i=1; i<=3; i++){
        for(j=1; j<=3; j++)
            printf("%2d ",a[i]);
        printf("\n");
    }
}

int main(){
    int b[4], p[10], x, y, z, i;
freopen("inv.txt","r",stdin);
    for(i=1; i<=9; i++)
        scanf("%d",&p[i]);

    for(i=1; i<=3; i++)
        scanf("%d",&b[i]);
    inv(p);
    x = b[1]*a[1] + b[2]*a[2] + b[3]*a[3];
    y = b[1]*a[4] + b[2]*a[5] + b[3]*a[6];
    z = b[1]*a[7] + b[2]*a[8] + b[3]*a[9];
    printf("\nx = %d    y = %d    z = %d\n",x,y,z);
    return 0;
}
