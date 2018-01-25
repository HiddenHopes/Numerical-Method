#include<stdio.h>

int main(){
    int b[4], p[10], x, y, z, i;
freopen("gauss.txt","r",stdin);
    for(i=1; i<=9; i++)
        scanf("%d",&p[i]);

    for(i=1; i<=3; i++)
        scanf("%d",&b[i]);

    p[5] = p[5] - p[2]*(p[4]/p[1]); p[6] = p[6] - p[3]*(p[4]/p[1]); b[2] = b[2] - b[1]*(p[4]/p[1]);
    p[8] = p[8] - p[2]*(p[7]/p[1]); p[9] = p[9] - p[3]*(p[7]/p[1]); b[3] = b[3] - b[1]*(p[7]/p[1]);

    p[9] = p[9] - p[6]*(p[8]/p[5]); b[3] = b[3] - b[2]*(p[8]/p[5]);
    z = b[3]/p[9];
    y = (b[2]-p[6]*z)/p[5];
    x = (b[1]-p[2]*y-p[3]*z)/p[1];


    printf("\nx = %d    y = %d    z = %d\n",x,y,z);
    return 0;
}
