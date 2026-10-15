//
//  Simple interest.c
//  MyTool
//
//  Created by Abhirup Das on 13/10/26.
//

#include<stdio.h>
int main()
{
    float p,r,t;
    printf("Enter principle ammount,rate of interest,time(year) respectively:");
    scanf("%f%f%f",&p,&r,&t);
    printf("The simple interest is %.2f",(p*r*t)/100);
    return 0;
}
