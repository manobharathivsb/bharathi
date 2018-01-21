#include <stdio.h>
int main(void) 
{
int n,sum=1,i;
printf(" enter the number\n");
scanf("%d",&n);
for(i=0;i<=5;i++)
{
sum=sum*i;
printf("factorial is %d",sum);
}
	return 0;
}
