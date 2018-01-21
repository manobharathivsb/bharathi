 #include <stdio.h>
int main(void) 
{
int n,i,a,count=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
a=n%i;
if(a==0)
{
count++;
}
}
if((count==0)||(count==1))
{
printf("%d is a prime number ",n);
}
else
{
printf("%d  is not a prime number",n);
}	
	return 0;
}

