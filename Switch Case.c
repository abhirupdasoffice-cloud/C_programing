//
//  Star Pattern 1..c
//  MyTool
//
//  Created by Abhirup Das on 12/10/26.
//

#include<stdio.h>
int main()
{
    float num1,num2;
    char opp;
    printf("Enter two numbers:");
    scanf("%f%f",&num1,&num2);
    printf("\n");
    printf("Enter an operator:");
    scanf(" %c",&opp);
    switch(opp)
        {
            case '+':
                {
                printf("Sum of %f and %f is %f \n",num1,num2,num1+num2);
                break;
                }
            case '-':
                {
                printf("Difference of %f and %f is %f \n",num1,num2,num1-num2);
                break;
                }
            case '*':
                {
                printf("Multiplication of %f and %f is %f \n",num1,num2,num1*num2);
                break;
                }
            case '/':
                {
                if(num2!=0)
                    printf("Division of %f and %f is %f",num1,num2,num1/num2);
                else
                    printf("Division by zero is undefined");
                break;
                }
            case '%':
                {
                if(num2!=0)
                    printf("Remainder of %f and %f is %d",num1,num2,(int)num1%(int)num2);
                else
                    printf("Division by zero is undefined");
                break;
                }
            default:
                printf("You have entered a invalid operator %c",opp);
        }
    return 0;
}
