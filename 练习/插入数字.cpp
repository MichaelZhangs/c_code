#include <stdio.h>
#include <math.h>
#include <string.h>
void sort(int *q,int n);
void insert(int a[],int i);
void dele(int a[],int n);

int main(void)
{
	int a[8]={8,7,5,3,2,9,6};
	
		int *p=a;
	int i;
	sort(a,8);
		for(i=0;i<8;i++)
			printf("%d ",a[i]);
			printf("\n");
	printf("输入插入数字： ");
	scanf("%d",&i) ;
	//p=a;
	insert(a,i);
	sort(a,8);
		for(i=0;i<8;i++)
			printf("%d ",a[i]);
				printf("\n");
	printf("输入删除数字： ");
	scanf("%d",&i) ;
	dele(a,i);
//	p=a;	
	sort(a,7);
for(i=0;i<7;i++)
			printf("%d ",a[i]);
		
} 

void sort(int a[],int n)
{
	int *temp;
	int i,j,k;

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		
		/*	if( *(q+j) > *(q+i))
		{	//	k=j;
				*temp = *(q+j);
				*(q+j) = *(q+i);
				*(q+i) = *temp;	
}
		*/	
		if(a[j] >a[i])
		{
			k = a[j];
			a[j] = a[i];
			a[i] = k;
			
		}	
	}	
}

		
		printf("\n");
}

void insert(int a[],int i)
{
	int j,k;
	for(j=0;j<8;j++)
	
		if ( i<a[j] ) 
		{
		for(k=7;k>j;k--)
			a[k] = a[k-1];
		a[j] = i;
				break;
	}
	if (i == 7)
		a[k] = i;	
	return;
	
}
void dele (int a[],int n)
{
	int i,j;
	for(i=0;i<6;i++)
	{
		if ( n == a[i])
	{
	
		for(j=i;j<8;j++)	
			a[j] = a[j+1];
			break;	
	} 
}
	if (i == 8)
		printf("不存在\n");
	return ;
}
