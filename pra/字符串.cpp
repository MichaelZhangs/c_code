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
	printf("从哪个位置开始删除： ");
	scanf("%d",&n);
	printf("删除几个: ");
	scanf("%d",&i);

	dele(s,n,i);
	puts(s);
}

