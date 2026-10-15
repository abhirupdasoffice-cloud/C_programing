//
//  Binary pattern 1.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int a,i,j,k=1,l=0;
    printf("Enter the number of lines:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0 && j%2==0)
                printf("%d\t",k);
            else if(i%2!=0 && j%2!=0)
                printf("%d\t",k);
            else
                printf("%d\t",l);
        }
        printf("\n");
    }
}
