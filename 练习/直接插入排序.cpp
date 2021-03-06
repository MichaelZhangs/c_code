#include "stdio.h"
#include "stdlib.h"
int main(void)
{
	//直接插入排序 
	int a[10]={1,5,76,32,8,23,97,2,67,98};
	int i,j,len=10,temp;
/*	for(i=2;i<len;i++)
		if(a[i] < a[i-1])
	{
			temp=a[i];
			a[i]=a[i-1];
		for(j=i-2;temp< a[j];--j)
			a[j+1] = a[j];
			a[j+1]= temp;		
}*/
//第二种类型
	for(i=1;i<len;i++)
		{
			temp=a[i];
			j=i-1;
			while(j>=0&&temp < a[j])
				{
					a[j+1] = a[j];
					--j;					
				}
				a[j+1] = temp;			
		} 
		for(i=0;i<len;i++)
			printf("%d ",a[i]);
	
	return 0;
}
