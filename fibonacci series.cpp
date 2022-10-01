#include<stdio.h>
int main()
{
	int i,n,a=0,b=1;
	int c=a+b;
	printf("enter the range");
	scanf("%d",&n);
	printf("fibonacci series is %d  %d",a,b);
    for(i = 2;i <= n; ++i)
	{
		printf(" %d ",c);
		a=b;
		b=c;
		c=a+b;
		
			
		}return 0;
}
