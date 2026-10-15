//
//  Area of circle.c
//  MyTool
//
//  Created by Abhirup Das on 12/10/26.
//

#include<stdio.h>
void main()
{
    float r;
    const double pi=3.14;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    printf("Area of the circle with radius %f is %f",r,pi*r*r);
}
