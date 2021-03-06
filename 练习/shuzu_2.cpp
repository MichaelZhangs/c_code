#include<stdio.h>
#include<math.h>
int main(void)
{
	int a[5],i,max,min;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	max=min=a[0];
	
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
		
	}
	printf("max=%d,min=%d\n",max,min);
	return 0;	
}
