#include<stdio.h>
int main()
{
    int a,count=0;
    scanf("%d",&a);
    do{
        
        count++;
        a/=10;
    }
    while(a>0);
    printf("%d",count);
    return 0;
}
