#include<stdio.h>

int main(void)
{
	int a=2,*p=&a,*q=&a;
	printf("%d %d\n",*p++,*(q++));
	printf("%d %d\n",*p,q++);
	printf("%d %d\n",++a,a++);
	p=&a;
	q=&a;
	printf("%d %d\n",*p,(*q)++);
	return 0;
	
}
