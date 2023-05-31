//enter a program to print amstrong numbers within a range
#include<stdio.h>
void main()
{
int l1,l2,i,temp,d,sum=0,flag=0;
clrscr();
printf("please enter upper limit and lower limit:");
scanf("%d %d",&l1,&l2);
printf("amstrong numbers between %d & %d is:",l1,l2);
 for(i=l1;i<=l2;i++)
	{
	sum=0;
	for(temp=i;temp>0;temp=temp/10)
		{
		d=temp%10;
		sum=sum+d*d*d;
		}
		if(sum==i)
			{
			flag=1;
			printf("\n %d",i);
			}
	}
		if(flag==0)
			{
			printf("nill");
			}
		getch();
 }