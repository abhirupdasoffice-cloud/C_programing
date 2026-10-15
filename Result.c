//
//  Result.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    float a,b,c,d,e,ave;
    printf("Enter marks of five subjects:");
    scanf("%f%f%f%f%df",&a,&b,&c,&d,&e);
    printf("Total marks is %.2f\n",a+b+c+d+e);
    ave=(((a+b+c+d+e)/500)*100);
    if(ave<=100 && ave>=90)
        printf("Grade O");
    else if(ave<90 && ave>=80)
        printf("Grade A");
    else if(ave<80 && ave>=70)
        printf("Grade B");
    else if(ave<70 && ave>=60)
        printf("Grade C");
    else if(ave<60 && ave>=50)
        printf("Grade D");
    else
        printf("grade F");
}
