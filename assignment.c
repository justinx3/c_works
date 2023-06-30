#include<stdio.h>
void main()
{
int bin[32],n,i=0,j,z,c,oct[64],dec,temp;
char hexa[100];
clrscr();
printf("Enter a decimal number:");
	scanf("%d",&n);z=n;
while(n>0)
	{
	bin[i]=n%2;
	n=n/2;
	i++;
	}
	printf("Binary :");
		for(j=i-1;j>=0;j--)
		{
			printf("%d",bin[j]);
		}
i=0;
dec=z*1;
while(z>0)
	{
	oct[i]=z%8;
	z=z/8;
	i++;
	}
	printf("\nOctal  :");
		for(j=i-1;j>=0;j--)
		{
			printf("%d",oct[j]);
		}
while(dec!=0)
	{
	temp=dec%16;
	if (temp<10)
		temp = temp+48;
	else
		temp = temp+55;
		hexa[i++]=temp;
		dec=dec/16;
	}
	printf("\nHexadecimal is :");
	for(i=j;i>=0;i--)	printf("%c",hexa[i]);
	getch();
}