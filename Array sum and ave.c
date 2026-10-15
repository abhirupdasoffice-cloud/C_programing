//
//  Array sum and ave.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int n,a[n],i,sum=0;
    printf("Input number of integers you want to enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Input an integer number:\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("Sum of all your inputs is %d\n",sum);
    printf("Average of all your inputs is %d",sum/n);
}
