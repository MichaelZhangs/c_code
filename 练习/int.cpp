#include <stdio.h>
#include <math.h>
int main(void)
{
	//double i = 765432.179;
	//float 只能保存7个有效位数 
	int num=0;
/*	char a;
	printf("pls input charc: ");
	scanf(" %c",&a);
	while( a != '.')
	{
		num+=1;
		scanf(" %c",&a);
	}

	printf("%d",num);
	return 0;
	*/
	while (getchar() != '.')
	{
		num +=1;
	 
	}
	printf("%d",num); 
	
	
	
}
