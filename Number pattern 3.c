//
//  Pattern printing 3.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int a,i,j;
    printf("Enter the number of lines:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        {
        for(j=1;j<=i;j++)
            printf("%d\t",j);
        printf("\n");
        }
}
