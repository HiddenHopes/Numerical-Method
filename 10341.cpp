#include <stdio.h>
#include <math.h>
#define E 0.000000001

double p, q, r, s, t, u, x1, x2, x0, f0, f1, f2;
double f(double x)
{
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}
int main()
{
    double root;
    freopen("in.txt","r",stdin);
    while(scanf("%lf %lf %lf %lf %lf %lf",&p, &q, &r, &s, &t, &u)==6)
    {
	x1 = 0;
	x2 = 1;
	f1 = f(x1);
	f2 = f(x2);

	if(f1*f2>0){
	    printf("No solution\n");
	    continue;
	}
	else
	while(1) {
	    x0 = (x1+x2)/2;

	    f0 = f(x0);
	    if(f1*f0<=0)
	    {
		x2 = x0;
	    }
	    else
	    {
		x1 = x0;
		f1 = f0;
	    }
	    if(fabs(x2 - x1)<E)
	    {
		root = (x1 + x2)/2;
		printf("%.4lf\n", root);
		break;
	    }
	    else
		continue;
	}


    }
    return 0;
}
