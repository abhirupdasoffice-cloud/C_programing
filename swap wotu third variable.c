//
//  swap wotu third variable.c
//  MyTool
//
//  Created by Abhirup Das on 13/10/26.
//

#include<stdio.h>
int main()
{
    float num1,num2,m,n;
    printf("Enter two numbers:");
    scanf("%f%f",&num1,&num2);
    m=num1;
    n=num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("After swaping %.2f,%.2f will be %.2f and %.2f",m,n,num1,num2);
    return 0;
}
