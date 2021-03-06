#include <stdio.h>
#include <math.h>
int main(void)
{
	char a[]={"I LOVE YOU YOU KNOW"};//char a[]="china";
	int i,num=0;

	for(i=0;a[i];i++)
	{
		if(a[i] != ' ')
				num += 1;
		
	}
//puts(a);
//printf("%c",a[i]);
	printf("%d",num);
	printf("\n");
	int c[10]={1,2,3,4,5,6,7,8,9,0};
	int *k;
	
	for(k=&c[9];k>=c;k--)
{
		printf("%d ",*k);
}		
	printf("\n");
	return 0;
}
