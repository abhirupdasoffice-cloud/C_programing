//
//  Division.c
//  MyTool
//
//  Created by Abhirup Das on 13/10/26.
//

#include<stdio.h>
void main()
{
    float num1,num2;
    printf("Enter two numbers:");
    scanf("%f%f",&num1,&num2);
    if(num2!=0)
        printf("Result of division of %f and %f is %f",num1,num2,num1/num2);
    else
        printf("Division by zero is undefined");
}
