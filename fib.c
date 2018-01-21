#include <stdio.h>
int main(void)
{
int a=0,b=1,i,n,c;
printf("enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
printf("%d",a);
c=a+b;
a=b;
b=c;
}
