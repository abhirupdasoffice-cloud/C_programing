//
//  Sum of digits.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int num,num1,r,sum=0;
    printf("Input a number:");
    scanf("%d",&num);
    num1=num;
    while(num>0)
    {
        r=num%10;
        num=num/10;
        sum=sum+r;
    }
    printf("Sum of digits of %d is %d",num1,sum);
}
