//
//  Array even odd count.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int m,a[m],i,count=0,count1=0;
    printf("Input number of elements you want to enter:");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("Input an intiger number:");
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            count++;
        else
            count1++;
    }
    printf("Number of even and odd elements in your inputs are respectively %d and %d",count,count1);
}
