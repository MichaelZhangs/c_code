#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
	int a[3][4]={
		{1,2,3,4},
		{9,7,8,6},
		{10,-2,6,3},
	};	
	int i,j;
	int max=a[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(max<a[i][j])
			{
				max=a[i][j];
			}
	printf("%d ",max);
	return 0;
}
