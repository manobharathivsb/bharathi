#include <stdio.h>
int main(void) 
{
int no,sum=0,r,s;
printf("enter the value\n");
while(no>0)
{
r=no%10;
s=r*r*r;
sum=sum+(r*r*r);
no=no/10;
}
if(no==sum)
{
printf(" it is armstrong number");
}
else
{
printf("it is not a armstrong number");
}
return 0;
}


