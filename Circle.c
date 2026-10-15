//
//  Circle.c
//  MyTool
//
//  Created by Abhirup Das on 13/10/26.
//

#include<stdio.h>
int main()
{
    float r,pi=3.14;
    printf("Enter radius of the circle:");
    scanf("%f",&r);
    printf("Area of the circle with given radius %.2f is %.2f\n",r,pi*r*r);
    printf("Peremeter of the circle with given radius %.2f is %.2f\n",r,2*pi*r);
    return 0;
}
