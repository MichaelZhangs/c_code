#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
	char *p;
	gets(p);
	puts(p);
	char *q;
	q=p;
	while(*q != '\0')
		q++;
	q--;
	while(p<q)
		if(*p == *q)
		{
		
			p++;
			q--;	
		}
		else
			{
				printf("��");
				break;
			}

	 	printf("�ǻ����ַ�\n");
	printf("\n");
	return 0;
}
