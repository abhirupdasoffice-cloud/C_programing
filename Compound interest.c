//
//  Compound interest.c
//  MyTool
//
//  Created by Abhirup Das on 13/10/26.
//

#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    printf("Enter principle amount,rate of interest,time(in year) respectively:");
    scanf("%f%f%f",&p,&r,&t);
    printf("Total amount with interest is ₹%.2f\n",p*pow((1+r/100),t));
    printf("Compound interest=%.2f",(p*pow((1+r/100),t))-p);
    return 0;
}
