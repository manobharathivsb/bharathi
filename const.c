#include <stdio.h>
int main(void)
{
	char c;
	int a,b;
	printf("enter an alpabet");
	scanf("%c",&c);
		a=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
		b=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
		if(a||b)
		{
			printf("%c is a vowel",c);
		}	
		else
		{	
		printf("%c is a constant",c);
			}
			return 0;
}
		
	
