#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
	char a[10];
	char b[10];
	char c[]=" ";
	gets(a);
	gets(b);
	int i=0,j=0;
/*	while(a[i])
	{
	
		c[i]=a[i];
			i++;	
	}	
	while(b[j])
		{
			c[i+j]=b[j];
			j++;
		}
	c[i+j] = '\0';
	*/		
	while(a[i])
		i++;
	while (b[j] && i<9)
		{
	
			a[i] = b[j];
			i++;
			j++;
	}
//	a[i+j] = '\0';
	puts(a);
	return 0;
}
