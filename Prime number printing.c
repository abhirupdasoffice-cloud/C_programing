//
//  Prime number printing.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int n,i,j,flag=0;
    printf("Input an integer number:");
    scanf("%d",&n);
    printf("Prime numbers upto %d:\n",n);
    for(i=2;i<=n;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            continue;
        else
            printf("%d\t",i);
    }
}
