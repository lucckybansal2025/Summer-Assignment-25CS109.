/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,count=0;
    printf("enter any number");
    scanf("%d",&n);
    if (n==0){
    count=1;
    }
    else{
    while(n!=0)
    {
        count=count+1;
        n=n/10;}
        printf("%d\n",count);
    }
    return count;
}