//
//  Fer to cel.c
//  MyTool
//
//  Created by Abhirup Das on 13/10/26.
//

#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in ferenhite:");
    scanf("%f",&f);
    c=((5*f)-160)/9;
    printf("The given temperature in celcius is %.3f",c);
    return 0;
}
