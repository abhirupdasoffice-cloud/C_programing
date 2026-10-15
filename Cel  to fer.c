//
//  Cel  to fer.c
//  MyTool
//
//  Created by Abhirup Das on 13/10/26.
//

#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in celcius:");
    scanf("%f",&c);
    f=((9*c)+160)/5;
    printf("The given temperature in ferenhite is %.3f",f);
    return 0;
}
