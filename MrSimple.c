#include <stdio.h>
int main()
int add(int num1, int num2)
{
    return num1+num2;
}
int multiply(int num1,int num2)
{
    return num1+num2;
}
int subtraction(int num1, int num2)
{
    return num1-num2;
}
float division(float num1, float num2)
{
    return num1/num2;
}
{
    int num1,num2,ans=0;
    float ans1 =0;
    char choice;

    printf("\nA for Addition\n ");
    printf("S for Subtraction\n ");
    printf("M for Multiplication\n ");
    printf("D for Division\n ");

    printf("\nEnter Operation of Choice: ");
    scanf("%c",&choice);

    if(choice == 'A' || choice == 'a')
    {
        printf("Enter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);
        ans = (num1,num2);
        ans = add(num1,num2);
        printf("%d",ans);
    }
    else if(choice == 'S' || choice == 's')
    {
        printf("Enter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);
       ans = subtraction(num1,num2);
       printf("%d",ans);
    }
    else if(choice == 'M' || choice == 'm')
    {
        printf("Enter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);
        ans = multiply(num1,num2);
        printf("%d",ans);
    }
    else if(choice == 'D' || choice == 'd')
    {
        printf("Enter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);
        ans1 = division(num1,num2);
        printf("%f",ans1);
    }

    return 0;
}