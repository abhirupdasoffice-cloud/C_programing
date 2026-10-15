//
//  G.C.D.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    int a,b,small;
    printf("Input two numbers:");
    scanf("%d%d",&a,&b);
    if(a<b)
        small=a;
    else
        small=b;
    while(small>0)
    {
        if(a%small==0 && b%small==0)
            break;
        else
            small--;
    }
    printf("G.C.D of %d and %d is %d",a,b,small);
}
