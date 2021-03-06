#include <stdio.h>
#include <math.h>

void nizhi(int *p,int n);
void sort(int a[],int n);
int main(void)
{
	int i,a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	nizhi(a,9);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	sort(a,10);	
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
		
}
/*void sort(int a[],int n)
{
	int i,j,k,temp;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		
			if (a[j]>a[k])
			
			k=j;	
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
		
	}
}*/
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<9;i++)
	{
		j=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{ 
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
		}	
		} 
	}
	
}	
void nizhi(int *p,int n)
{
	int t,i,j;
		t =n/2;
	for(i=0;i<t;++i)
	{
		j = *(p+n-i);
		*(p+n-i) = *(p+i);
		*(p+i) = j;

	}

}



