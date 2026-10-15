//
//  Average of three.c
//  MyTool
//
//  Created by Abhirup Das on 13/10/26.
//

#include<stdio.h>
int main()
{
    float num1,num2,num3;
    printf("Enter three numbers:");
    scanf("%f%f%f",&num1,&num2,&num3);
    printf("Average of %f,%f and %f is %f",num1,num2,num3,(num1+num2+num3)/3);
    return 0;
}
