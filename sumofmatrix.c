#include<stdio.h>

int main()

{

    int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2;

    a1:

    printf("Enter the row and coloumn number for A :\n"); 

    scanf("%d%d",&r1,&c1);

    printf("Enter the row and coloumn for B :\n");

    scanf("%d%d",&r2,&c2);

    if(r1==r2&&c1==c2)

    {

        printf("Enter elements of A :\n");

        for (i=0;i<r1;i++)

        {

            printf("%d row :\n",i+1);

            for(j=0;j<c2;j++)

            {

                scanf("%d",&a[i][j]);

            }

        }

        printf("enter elements of B :\n");

        for(i=0;i<r2;i++)

        {

            printf("%d row :\n",i+1);

            for(j=0;j<c2;j++)

            {

                scanf("%d",&b[i][j]);

            }

        }

        printf("Adding two matrix : \n");

        for(i=0;i<r1;i++)

        {

            for(j=0;j<c1;j++)

            {

                c[i][j]=a[i][j]+b[i][j];

            }

        }

        printf("\nResult : \n");

        for(i=0;i<r1;i++)

        {

            printf("\n");

            for(j=0;j<c1;j++)

            {

                printf("%d\t",c[j][i]);

            }

        }

    }

    else

    {

        printf("The matrix does not have equal num of rows and coloumn :\n");

        goto a1;

    }

}
