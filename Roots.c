//
//  Roots.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,x1,x2;
    printf("Enter the coefficient of X^2,X^1 and X^0:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
        printf("Equation has complex roots");
    else
    {
        x1=((-b+sqrt(d))/(2*a));
        x2=((-b-sqrt(d))/(2*a));
        printf("Roots of the quadratic equation %dX^2+%dX+%d are %d and %d",a,b,c,x1,x2);
    }
}
