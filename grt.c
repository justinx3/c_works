#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
      printf("largest=%d is a",a);
    else if(b>a&&b>c)
      printf("largest=%d is b",b);
    else
      printf("largest=%d is c",c);
}