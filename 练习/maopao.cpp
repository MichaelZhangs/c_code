#include<stdio.h>
#include<math.h>
int main(void)
{
	int a[5],i,j,t,flag;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=1,flag=0;i<5;i++,flag=0)
	{
		for(j=0;j<5-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				flag=1;
		}
			if(flag==0)
				break;
	}
	printf("the sorted numbers:\n");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
