#include "stdio.h"
#include "stdlib.h"
#define N 10
int main(void)
{
	int a[N] ={43,12,5,78,49,34,24,7,87,98};
	int low=0,high =N-1;
	int temp;
	temp = a[0];
	while(low<high)
		{
			while (low < high && a[high] >= temp)
				--high;
				a[low] = a[high];
			while (low < high && a[low] <= temp)
				++low;
			a[high] = a[low];
			
	}
		a[low] = temp;
		int i;
	for(i=0;i<N;i++)
			printf("%d ",a[i]);
}
			
