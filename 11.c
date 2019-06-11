#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,prod=1;
    scanf("%d %d",&a,&b);
    while(b>0)
    {
        prod*=a;
        b--;
    }
    printf("%d",prod);
    return 0;
}
