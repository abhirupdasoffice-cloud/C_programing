//
//  Delet an element of array.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int m,a[m],i,j,n;
    printf("Input number of elements you want to enter:");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("Input one integer number:\n");
        scanf("%d",&a[i]);
    }
    printf("Input the element you want to delete:");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        if(a[i]==n)
            j=i;
        break;
    }
    for(i=j+1;i<m;i++)
        a[i-1]=a[i];
    for(i=0;i<m-1;i++)
        printf("%d\t",a[i]);
}
