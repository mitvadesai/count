#include<stdio.h>
main()
{
	int f,l,n,sum;
	
	printf("enter value n: ");
	scanf("%d",&n);
	
	l = n % 10;
	while(n>=10)
	{
		n = n/10;
	}
	
	f=n;
	printf("sum=%d",f+l);
}