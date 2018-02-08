#include <stdio.h>
int main()
{
	int x,y=0,z,n;
	printf("\n enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		x=n%10;
		y=(y*10)+x;
		n=n/10;
	}
	while(y!=0)
	{
		z=y%10;
		printf("%d ",z);
		y=y/10;
	}
	return 0;
}

