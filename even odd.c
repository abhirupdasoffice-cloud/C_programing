//
//  even odd.c
//  MyTool
//
//  Created by Abhirup Das on 13/10/26.
//

#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is an even number",num);
    else
        printf("%d is an odd number",num);
}
