//
//  Max of five.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int num1,num2,num3,num4,num5;
    printf("Enter five numbers:");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
    if(num1>num2 && num1>num3 && num1>num4 && num1>num5)
        printf("%d is maximum",num1);
    else if(num2>num3 && num2>num4 && num2>num5)
        printf("%d is maximum",num2);
    else if(num3>num4 && num3>num5)
        printf("%d is maximum",num3);
    else if(num4>num5)
        printf("%d is maximum",num4);
    else
        printf("%d is maximum",num5);
}
