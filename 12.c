#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,sum=0,rem;
    scanf("%d",&a);
    i=a;
    while(i)
    {
        rem=i%10;
        sum=sum*10+rem;
        i/=10;
    }
    if(sum==a)
    {
        printf("yes");
    }
    else printf("no");
    return 0;
}
