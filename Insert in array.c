//
//  Insert in array.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int m,a[m+1],i,j,n;
    printf("Input number of elements you want to enter:");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("Input one integer number:\n");
        scanf("%d",&a[i]);
    }
    printf("Input in which index do you want to enter the element:");
    scanf("%d",&j);
    printf("Input the elment you want to insert:");
    scanf("%d",&n);
    for(i=m;i>=j;i--)
        a[i+1]=a[i];
    a[j]=n;
    for(i=0;i<m+1;i++)
        printf("%d\t",a[i]);
}
