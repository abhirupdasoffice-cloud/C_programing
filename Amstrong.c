//
//  Amstrong.c
//  MyTool
//
//  Created by Abhirup Das on 14/10/26.
//

#include<stdio.h>
int main()
{
    int n,m,k,r,s=0,p=1,j=1,i=0;
    printf("Input a number:");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        n=n/10;
        i++;
    }
    k=m;
    while(m>0)
    {
        r=m%10;
        while(j<=i)
        {
            p=p*r;
            j++;
        }
        s=s+p;
        p=1;j=1;
        m=m/10;
    }
    if(s==k)
        printf("%d is an amstrong number",k);
    else
        printf("%d is not an amstrong number",k);
    return 0;
}
