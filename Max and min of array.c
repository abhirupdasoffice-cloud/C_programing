//
//  Max and min of array.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int n,a[n],i,big,small;
    printf("Input number of elements you want to enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Input an integer number:");
        scanf("%d",&a[i]);
    }
    big=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>big)
            big=a[i];
    }
    small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
            small=a[i];
    }
    printf("Biggest and smallest elements are respectively %d and %d",big,small);
}
