//
//  Leap year.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int year;
    printf("Enter a four digit year:");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0)
        printf("%d is a leap year",year);
    else
        printf("%d is not a leap year",year);
}
