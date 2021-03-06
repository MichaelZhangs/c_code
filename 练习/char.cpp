#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
	char *p ="LOVEYOUJACK";
	char *q;
/*	for(q=p;*q!='\0';)
		q++;
	for(q--;q>=p;q--)
		printf("%5C",*q);
	putchar('\n');
	*/
	char *temp;
	int n;
	n=strlen(p);
	q=p+n;
//	for(;q>=p;q--)
	while(q>=p)
	{
	
		putchar(*q);
		q--;
	}
	putchar('\n');
	return 0;
}
