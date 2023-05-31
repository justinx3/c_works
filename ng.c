#include<stdio.h>
void main()
{
int num,p=0,n=0,z=0;
char ch;
clrscr();
do
{
printf("enter number:");
scanf("%d",&num);
	if(num>0)
		p++;
	else if (num<0)
		n++;
	else
		z++;
	printf("continue?(y/n)");
	flushall();
	scanf("%c",&ch);
}
	while(ch=='y');
	printf("no of positives %d:",p);
	printf("no of negatives %d:",n);
	printf("no of zeros     %d:",z);
	getch();
}