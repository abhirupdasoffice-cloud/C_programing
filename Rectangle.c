//
//  Rectangle.c
//  MyTool
//
//  Created by Abhirup Das on 13/10/26.
//

#include<stdio.h>
int main()
{
    float side1,side2;
    printf("Enter length and width of rectangle:");
    scanf("%f%f",&side1,&side2);
    printf("Area of the rectangle with given sides %f and %f is %f sq.unit",side1,side2,side1*side2);
    printf("Peremeter of the rectangle with given sides %f and %f is %f unit",side1,side2,2*(side1+side2));
    return 0;
}
