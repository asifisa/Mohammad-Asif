#include<stdio.h>
int main()
{
    int n,i,k,a[1000],sum=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
