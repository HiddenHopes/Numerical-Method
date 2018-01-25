#include<stdio.h>
#define E 0.0005
int main(){
    double b[4], p[10], x, y, z, px, py, pz;
    int i, t=100;
freopen("gaussseidel.txt","r",stdin);
    for(i=1; i<=9; i++)
        scanf("%lf",&p[i]);

    for(i=1; i<=3; i++)
        scanf("%lf",&b[i]);

    x=0;    y=0;    z=0;
    px=1;   py=1;   pz=1;
    while(fabs(x-px)>E&&fabs(y-py)>E&&fabs(z-pz)>E){
        px = x; py = y;  pz = z;
        x = (b[1]-p[2]*y-p[3]*z)/p[1];
        y = (b[2]-p[4]*x-p[6]*z)/p[5];
        z = (b[3]-p[7]*x-p[8]*y)/p[9];
        printf("\nx = %lf    y = %lf    z = %lf\n",x,y,z);
    }

    return 0;
}
