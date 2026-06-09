
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