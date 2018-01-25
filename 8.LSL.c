#include<stdio.h>

int main()
{
    int x[20],y[20],i,j,n;
    double xsum,ysum,x2sum,xysum;
    double a,b;
    freopen("lsl.txt","r",stdin);
    scanf("%d",&n);
    xsum=0;
    ysum=0;
    x2sum=0;
    xysum=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&x[i],&y[i]);

        xsum=xsum+x[i];
        ysum=ysum+y[i];
        x2sum=x2sum+(x[i]*x[i]);
        xysum=xysum+(x[i]*y[i]);
    }
    printf("%.0lf %.0lf %.0lf %.0lf\n",xsum,ysum,x2sum,xysum);

    b = (n*xysum-xsum*ysum)/(n*x2sum-xsum*xsum);
    a = (ysum/n)-(b*xsum)/n;

    printf("y = %.2lf + %.2lfx\n",a,b);



    return 0;
}
