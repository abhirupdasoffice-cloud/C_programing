//
//  Biggest of two.c
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
    if(num1>num2)
        printf("%.2f is bigger than %.2f",num1,num2);
    else
        printf("%.2f is bigger than %.2f",num2,num1);
}
