#include<stdio.h>
void main()
{
    int total,maths,html,ele,roll;
    char grade;
    printf("ENter roll no:");
    scanf("%d",&roll);
    printf("Enter maths mark:");
    scanf("%d",&maths);
    printf("Enter html mark:");
    scanf("%d",&html);
    printf("Enter electronics mark:");
    scanf("%d",&ele);
    total=maths+html+ele;
    if(total>=270)
    {
        grade='A';
    }
    else if(total>=200)
    {
        grade='B';
    }
    else if(total>=100)
    {
        grade='C';
    }
    else
    {
        grade='D';
    }
    printf("\nRoll no :%d",roll);
    printf("\nTotal:%d",total);
    printf("\nGrade:%c",grade);
getch();
}
