#include<stdio.h>

int main()
{
    int x[20],y[20],i,j,n;
    double a[10],b[4];
    double xsum,ysum,x2sum,x3sum,x4sum,xysum,yx2sum;
    double a1,a2,a3;
    freopen("lsp.txt","r",stdin);
    scanf("%d",&n);
    xsum=0;
    ysum=0;
    x2sum=0;
    x3sum=0;
    x4sum=0;
    xysum=0;
    yx2sum=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&x[i],&y[i]);

        xsum=xsum+x[i];
        ysum=ysum+y[i];
        x2sum=x2sum+(x[i]*x[i]);
        x3sum=x3sum+(x[i]*x[i]*x[i]);
        x4sum=x4sum+(x[i]*x[i]*x[i]*x[i]);
        xysum=xysum+(x[i]*y[i]);
        yx2sum=yx2sum+(y[i]*x[i]*x[i]);

    }
    printf("%.0lf %.0lf %.0lf %.0lf %.0lf %.0lf %.0lf\n",xsum,ysum,x2sum,x3sum,x4sum,xysum,yx2sum);

    a[1] = n;
    a[2] = xsum;
    a[3] = x2sum;
    a[4] = xsum;
    a[5] = x2sum;
    a[6] = x3sum;
    a[7] = x2sum;
    a[8] = x3sum;
    a[9] = x4sum;

    b[1] = ysum;
    b[2] = xysum;
    b[3] = yx2sum;
    printf("%.0lf %.0lf %.0lf %.0lf\n%.0lf %.0lf %.0lf %.0lf\n%.0lf %.0lf %.0lf %.0lf\n",a[1],a[2],a[3],b[1],a[4],a[5],a[6],b[2],a[7],a[8],a[9],b[3]);

 printf("%lf %lf %lf\n",b[1],b[2],b[3]);

    a[5] = a[5]-a[2]/a[1]*a[4];
    a[6] = a[6]-a[3]/a[1]*a[4];
    b[2] = b[2]-b[1]/a[1]*a[4];
    a[4] = a[4]-a[1]/a[1]*a[4];
 printf("%lf %lf %lf\n",b[1],b[2],b[3]);

    a[8] = a[8]-a[2]/a[1]*a[7];
    a[9] = a[9]-a[3]/a[1]*a[7];
    b[3] = b[3]-b[1]/a[1]*a[7];
    a[7] = a[7]-a[1]/a[1]*a[7];

 printf("%lf %lf %lf\n",b[1],b[2],b[3]);
    a[7] = a[7]-a[4]/a[5]*a[8];
    a[9] = a[9]-a[6]/a[5]*a[8];
    b[3] = b[3]-b[2]/a[5]*a[8];
    a[8] = a[8]-a[5]/a[5]*a[8];

 printf("%lf %lf %lf\n",b[1],b[2],b[3]);
    a[1] = a[1]-a[4]/a[5]*a[2];
    a[3] = a[3]-a[6]/a[5]*a[2];
    b[1] = b[1]-b[2]/a[5]*a[2];
    a[2] = a[2]-a[5]/a[5]*a[2];

 printf("%lf %lf %lf\n",b[1],b[2],b[3]);
    a[4] = a[4]-a[7]/a[9]*a[6];
    a[5] = a[5]-a[8]/a[9]*a[6];
    b[2] = b[2]-b[3]/a[9]*a[6];
    a[6] = a[6]-a[9]/a[9]*a[6];

 printf("%lf %lf %lf\n",b[1],b[2],b[3]);
    a[1] = a[1]-a[7]/a[9]*a[3];
    a[2] = a[2]-a[8]/a[9]*a[3];
    b[1] = b[1]-b[3]/a[9]*a[3];
    a[3] = a[3]-a[9]/a[9]*a[3];


    printf("%lf %lf %lf",b[1]/a[1],b[2]/a[5],b[3]/a[9]);
    return 0;
}
