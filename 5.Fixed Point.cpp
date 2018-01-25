#include <stdio.h>
#include <math.h>
#define E 0.0005
double f(double x)
{
    x = (x+5/x)/2;
    return x;
}

int main()
{
    double x,xp, root;
    int t=7;
    xp = -2.0;
    x = f(xp);
    while(fabs(x-xp)>E){
        //x1 = x2;
        xp = x;
        x = f(x);
        printf("%lf\n",x);
    }
    //printf("root = %.3lf\n",x0);
    return 0;
}
