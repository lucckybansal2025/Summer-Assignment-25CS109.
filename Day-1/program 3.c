/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int a=1,n;
    printf("enter any number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    a=a*i;}
    printf("%d\n",a);
    return 0;
}