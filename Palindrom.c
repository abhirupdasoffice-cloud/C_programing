//
//  Palindrom.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int num,num1,r,s=0;
    printf("Enter a number:");
    scanf("%d",&num);
    num1=num;
    while(num>0)
    {
        r=num%10;
        num=num/10;
        s=(s*10)+r;
    }
    if(s==num1)
        printf("%d is a palindrom number",num1);
    else
        printf("%d is a palindrom number",num1);
}
