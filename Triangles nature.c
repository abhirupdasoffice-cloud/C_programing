//
//  Triangles nature.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Input length of three sides:");
    scanf("%f%f%f",&a,&b,&c);
    if(a==b && a==c)
        printf("Triangle is equilateral");
    else if(a==b || a==c || b==c)
        printf("Triangle is isosceles");
    else
        printf("Triangle is scalene");
}
