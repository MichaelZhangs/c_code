#include<stdio.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

int volume(int a,int b,int c,int *p1,int *p2,int *p3)
{
	*p1 = a*b;
	*p2 = a*c;
	*p3 = b*c;
	
	return a*b*c;	
}
int main(void)
{
	int a,b,c,s1,s2,s3,v;
	printf("input three numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d\t%d\t%d\n",a,b,c);

	v=volume(a,b,c,&s1,&s2,&s3);	

	printf("%d\n",v);

	printf("%d\t%d\t%d\n",s1,s2,s3);
	
	return 0;
}
