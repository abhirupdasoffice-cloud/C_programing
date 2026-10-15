//
//  Multiplication table.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int n,i;
    printf("Input a integer number:");
    scanf("%d",&n);
    printf("Multiplication table of %d:\n",n);
    for(i=1;i<=10;i++)
        printf("%d*%d=%d\n",n,i,n*i);
}
