#include<stdio.h>
#include<math.h>
int fact(int n)
{
	if(n>1)
	return fact(n-1)*n;
}
int taylor_series(int x, int n)
{
	if(n==0)
	{ return 1;
	}
	else
	return taylor_series(x,n-1)+(pow(x,n)/fact(n));
}
int main()
{
	int x,n;
	scanf("%d%d", &x,&n);
	printf("the taylor series :%d", taylor_series(x,n));
	
}
