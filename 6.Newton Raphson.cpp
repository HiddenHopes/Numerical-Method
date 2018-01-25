#include <stdio.h>
#include <math.h>
#define E 0.0005
double f(double x)
{
    double r;
    r = x*x - 3*x + 2;
    return r;
}

double f_(double x)
{
    double r;
    r = 2*x - 3;
    return r;
}

int main()
{
    double xp, x,root;
    double f0,f1;
    xp = 9.0;
    x = 0.0;

    while(fabs(x-xp)>=E){
        xp = x;
        x = xp - (f(xp)/f_(xp));

        printf("%lf\n",xp);
    }
    //printf("root = %.3lf\n",x0);
    return 0;
}
