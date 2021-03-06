#include<stdio.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

int main(void)
{
	int *p;
	char *q;
	int c[10]={1,2,3,4,5,6,7,8,9,0};
/*	p=q;
	p=&a;
	scanf("%d",p);//<=>scanf("%d",&a)
	printf("%d %d",*p,a);*/
	p=c;
	printf("%d\n",*p);
	p=p+2;
	printf("%d %d %d\n",c[2],*p,*c+5);

//	char a[]="HELLO";
//	q=a;
	char *a = "HELLO";
//	printf("%s\n",a);
	while(*a)
		printf("%s\n",a++);
	puts(a);
	return 0;
}
