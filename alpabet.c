#include <stdio.h>

int main(void) 
{
	char c;
	printf("enter a char\n");
	scanf("%c",&c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	
	printf("%c is an alpabet",c);
	
	else
	
		printf("%c is not a alpabet",c);
	
	return 0;
}
