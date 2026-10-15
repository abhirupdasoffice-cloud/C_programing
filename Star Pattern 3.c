//
//  Star Pattern 3.c
//  MyTool
//
//  Created by Abhirup Das on 12/10/26.
//

#include<stdio.h>
int main()
{
int a,i,j;
printf("Enterprises number of lines:");
scanf("%i",&a);
for(i=1;i<=a;i++)
    {
    for(j=a;j>=i;j--)
        {
        printf("* ");
        }
    printf("\n");
    }
return 0;
}
