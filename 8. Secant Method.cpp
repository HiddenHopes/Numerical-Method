#include <stdio.h>
#include <math.h>
#define E 0.0005
double f(double x)
{
    double r;
    r = x*x - 4*x - 10;
    return r;
}

int main()
{
    double xpp,xp, x, x3, root;
    double f1, f2, f3;
    xp = 2.0;
    xpp = 4.0;
    while(fabs(xp-xpp)>= E){
        x = (f(xp)*xpp-f(xpp)*xp)/(f(xp)-f(xpp));
        printf("%lf\n",x);
xpp = xp;
        xp = x;


    }
    //printf("root = %.3lf\n",x0);
    return 0;
}
