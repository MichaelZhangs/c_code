#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int	dele(char s[],int i,int n);
int dele(char s[],int i,int n)
{
	if (i >=0 && n>0 && i+n <  strlen(s))
		{
			s[i] = '\0';
			strcat(s,s+n+i);
			return 1;
		}
	else
		return 0 ;
	
}
int main(void)
{

	int n,i;
	char s[]=;
	
		gets(s);
	printf("���ĸ�λ�ÿ�ʼɾ���� ");
	scanf("%d",&n);
	printf("ɾ������: ");
	scanf("%d",&i);

	dele(s,n,i);
	puts(s);
}

