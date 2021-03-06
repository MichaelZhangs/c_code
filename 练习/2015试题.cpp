#include "stdio.h"
#include "stdlib.h"

int f(int x,int n)
{
	int i;
	int p;
	for(p=1,i=1;i<=n;i++)
		p*=x;
		return p;
	
}
int main(void)
{
	int i=2,n=3;
	printf("%d ",f(i,n));
	
}
