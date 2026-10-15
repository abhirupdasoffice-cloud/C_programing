//
//  Voting only if.c
//  MyTool
//
//  Created by Abhirup Das on 13/10/26.
//

#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
        printf("You are elligible for voting");
    if(age<18)
        printf("You are not elligible for voting");
}
