#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(void)
{
	int a[]={1,12,45,23,87,32};
	int *p,*q;
	q=&a[1];
	p=&a[5];
	printf("%d\n",p-q);
	char c='\72ad';
	printf("%c\n",c);
	int i;
	float j;
	j=(float)i;
	printf("%d %d\n",sizeof(int),sizeof(j));
	return 0;
}


