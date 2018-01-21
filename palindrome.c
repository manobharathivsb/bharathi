#include <stdio.h>

int main(void)
 {
int num,temp,digit,reverse=0;
print("enter the number");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
digit=temp%10;
temp=temp/10;
reverse=reverse*10+digit;
}
if(num==reverse)
printf("%d is a palindrome number,"num);
else
printf("%d is not a palindrome",num);
	return 0;
}
