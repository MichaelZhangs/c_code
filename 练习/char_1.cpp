#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void fun(char *s,int *a,int *b);
void fun(char *s,int *a,int *b)
{
	while (*s)
	{
		if((*s) >='A' && (*s) <=92)
			(*a)++;
		if (*s >='a' && *s <= 122)
			(*b)++;
		s++;
	}

}
int main(void)
{
	char s[20];
	int upper=0,lower=0;
	printf("\nput a string: \n");
	gets(s);
	fun(s,&upper,&lower);
	printf("upper = %d,lower=%d\n",upper,lower);
	
	int i,sum;
	for(i=1,sum=0;i<5;i++,i++)
		sum+=i;
		printf("sum=%d\n",sum);
}
