#include <stdio.h>
int main()
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

    return 0;
}