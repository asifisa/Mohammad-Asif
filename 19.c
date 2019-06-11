#include<stdio.h>
#include<string.h>
int main()
{
    int a,prod=1;
    scanf("%d",&a);
    if(a==0)
    printf("1");
    else
    {
        while(a)
        {
            prod*=a;
          a--;
        }
        printf("%d",prod);
    }
    return 0;
}
