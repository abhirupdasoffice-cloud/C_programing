//
//  Swap.c
//  MyTool
//
//  Created by Abhirup Das on 12/10/26.
//

#include<stdio.h>
int main()
{
float a,b,m,n;
printf("Enter two numbers:");
scanf("%f%f",&a,&b);
m=a;
n=b;
a=a+b;
b=a-b;
a=a-b;
printf("After swaping %f and %f it will be %f and %f.",m,n,a,b);
return 0;
}
