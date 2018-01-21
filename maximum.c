#include <stdio.h>
int main(void) 
{
	int a,b,c;
	printf("enter the number\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
{
	printf("a is larger");
}	
if((b>a)&&(b>c))
{
	printf("b is larger");
}
if((c>a)&&(c>b))
{
	printf("c is larger");
}
	return 0;
}
