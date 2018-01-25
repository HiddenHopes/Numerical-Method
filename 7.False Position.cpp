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
    double x, x0, x1, x2, mx, root;
    double f0,f1,f2;

    x1 = -2.0;
    x2 = -1.0;
    f1 = f(x1);
    f2 = f(x2);
    if(f1*f2>0){
        printf("no solution\n");
    }
    else
        while(1){
        //mx = (b*b)/(a*a) - (-2*c)/a;
        //mx = sqrt(mx);

       // printf("%lf %lf\n",f1,f2);
        x0 = x1 - (f1*(x2-x1)/(f2-f1));
        printf("%lf\n",x0);
        f0 = f(x0);
        if(f1*f0<0){
            x2 = x0;
        }
        else{
            x1 = x0;
        }
        if(fabs(x2 - x1)<E){
            root = (x1 + x2)/2;
            printf("root  = %lf", root);
            break;
        }
        else
            continue;
    }
    return 0;
}
