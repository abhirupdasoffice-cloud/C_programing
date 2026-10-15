//
//  Star Pattern 4.c
//  MyTool
//
//  Created by Abhirup Das on 12/10/26.
//

#include<stdio.h>
int main()
{
int a,i,j;
printf("Enter the number of lines:");
scanf("%d",&a);
for(i=1;i<=a;i++)
    {
    for(j=1;j<=a;j++)
        {
        printf("*  ");
        }
    printf("\n");
    }
return 0;
}    
