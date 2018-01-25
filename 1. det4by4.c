#include<stdio.h>
int det(int p[]){

    int r;

    r = p[1]*(p[5]*p[9]-p[6]*p[8])-p[2]*(p[4]*p[9]-p[6]*p[7])+p[3]*(p[4]*p[8]-p[5]*p[7]);

    return r;
}

int main(){

    int a[5][5], p[10], i, j, k, d[5], D, col;
freopen("in.txt","r",stdin);
    for(i=1;i<=4;i++)
        for(j=1;j<=4;j++)
            scanf("%d",&a[i][j]);
    for(col=1;col<=4;col++){
        k = 1;
        for(i=2;i<=4;i++){
            for(j=1;j<=4;j++){
                if (col==j) continue;
                p[k] = a[i][j];
                printf("%d ",p[k]);
                k++;
            }
            printf("\n");
        }
        d[col] = a[1][col]*det(p);
        printf("d[%d]=%d\n",col,d[col]);
        printf("\n");printf("\n");
    }
    D = d[1] - d[2] + d[3] - d[4];
    printf("%d",D);
    return 0;
}
