#include <stdio.h>
#include <math.h>

int main()
{
    int a[100], b[100], i, n;
    scanf("%d", &n);
    b[0] = 0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++){
        b[i] = a[i-1] + 3*b[i-1];
        printf("%d ",b[i]);
    }
    return 0;
}
