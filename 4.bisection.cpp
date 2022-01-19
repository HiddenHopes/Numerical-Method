#include <stdio.h>
#include <math.h>
#define E 0.0005
double f(double x)
{
    return x*x*x - 9*x + 1;
}
int main()
{
    double x, x0, x1, x2, mx, root;
    double f0,f1,f2;

    x1 = 1.0;
    x2 = 3.0;
    f1 = f(x1);
    f2 = f(x2);
    if(f1*f2>0){
        printf("no solution\n");
    }
    else{
        while(1){

            x0 = (x1+x2)/2;
            printf("%lf\n",x0);
            f0 = f(x0);
            if(f1*f0<0){
                x2 = x0;
            }
            else{
                x1 = x0;
                f1 = f0;
            }
            if(fabs(x2 - x1)<E){
                root = (x1 + x2)/2;
                printf("root  = %lf", root);
                break;
            }
            else
                continue;
        }
    }
    return 0;
}
