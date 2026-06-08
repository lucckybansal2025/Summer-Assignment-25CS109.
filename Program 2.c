/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int n,a;
    printf("enter any number");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
    a=n*i;
    printf("%d*%d=%d\n",n,i,a);
    }
    return 0;
}