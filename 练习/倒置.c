#include <stdio.h>
#include <math.h>

void inverse(int * p,int k);

int main(void)
{
	int i,*p,a[6]={1,9,5,7,3,8};
	
	inverse(a,6);
	for(p=a;p<(a+6);p++)
		printf("%5d ",*p);
	
	printf("\n");	
}

void inverse(int *p,int k)
{
	/*int *q,temp;
	q=p+k-1;
	while(p<q)
	{
		temp = *q;
		*q = *p;
		*p = temp;
		p++;
		q--;
		
	}*/
	int *j,*q,*i,t,temp;
	t = (k-1)/2;
	q=p;j=p+k-1;i=p+t;
	for(;q<=j;q++,j--)
	{
		temp = *q;
		*q = *j;
		*j = temp;	
		
	}
	return;
}
