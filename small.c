#include <stdio.h>

int main(void) 
{
int a,b,c;
scanf("%d,%d,%d",&a,&b,&c);
printf("enter the value\n");
if((a<b)&&(a<c))
{
printf("a is small");
}
if((b<a)&&(b<c))
{
printf("b is small");
}
if((c<a)&&(c<b))
{
printf("c is small");
}
	return 0;
}
