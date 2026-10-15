//
//  linear serch.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int m,a[m],sitem,i,flag=0;
    printf("Input number of elements you want to enter:");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("Input an intiger number:");
        scanf("%d",&a[i]);
    }
    printf("Input search item:");
    scanf("%d",&sitem);
    for(i=0;i<m;i++)
    {
        if(a[i]==sitem)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d is found in %d index",sitem,i);
    else
        printf("%d is not found",sitem);
}
