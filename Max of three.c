//
//  Max of three.c
//  MyTool
//
//  Created by Abhirup Das on 13/10/26.
//

#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
            printf("%d is maximum",num1);
        else
            printf("%d is maximum",num3);
    }
    else
    {
        if(num2>num3)
            printf("%d is maximum",num2);
        else
            printf("%d is maximum",num3);
    }
}
