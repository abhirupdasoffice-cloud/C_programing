//
//  Sum of n.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("Sum of n natural numbers upto %d is %d",n,sum);
}
