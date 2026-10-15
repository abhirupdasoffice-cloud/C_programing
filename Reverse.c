//
//  Reverse.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int n,m,r,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        s=(s*10)+r;
    }
    printf("Reverse of %d is %d",m,s);
}
