#include<stdio.h>
#include<math.h>
int halfsearch(int *p,int i);
int main(void)
{
	int *a,n,i;
	for(i=0;i<8;i++)
		scanf("%d",a+i);
	
	for (i=0;i<8;i++)
		printf("%d ",*(a+i));
	printf("\n");
	printf("输入要查找的数字："); 
		scanf("%d",&n);	
	
	printf("\n%d\n",halfsearch(a,n));

}
int halfsearch(int *p,int i)
{
		int high=8,low=1;
	int mid;
	while (low <= high)
	{
	mid = (high + low)/2;
	if(*(p+mid) == i)
		return mid;
	else if(*(p+mid) > i) 
		high = mid - 1;
	else
		low = mid +1;
}
	return 0;
}
