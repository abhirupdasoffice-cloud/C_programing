//
//  Vowel or consonant check.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
void main()
{
    char a;
    printf("Input an alphabet:");
    scanf("%c",&a);
    if((a>=65 && a<=90) || (a>=97 && a<=122))
    {
        if(a==65 || a==69 || a==73 || a==79 || a==85 || a==97 || a==101 || a==105 || a==111 || a==117)
            printf("%c is vowel",a);
        else
            printf("%c os a consonant",a);
    }
    else
        printf("You dodn't enter an alphabet");
}
