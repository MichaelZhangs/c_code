#include <stdio.h>
#include <string.h>

void sort(int *p,int n);
int main(void)
{
		char w[20],a[5][10]={"abcdef","ghijkl","mnopq","rstuv","wxyz."};
		printf("%s\n",a);
		char (*t)[10] = a;
		puts(t[2]);
		//scanf("%s",&c);//�ո���Ϊ�ָ��� 
	//	gets(c);//���ո���Ϊ��ͨ�ַ���� 
		int c[]={1,7,2,4,5,0,9,-1};
		sort(c+1,5);//��c[1]��������5�� 
		int i;
		for(i=0;i<8;i++)
			printf("%d ",*(c+i));
			
	return 0;
}
void sort(int *p,int n)
{
	int i,k;
	int *t;
	for(i=1;i<n;i++)
		for(t=p+n-1;t>p+i-1;t--)
		
		if(*(t-1) > *t)
		{
			k=*t;
			*t=*(t-1);
			*(t-1)=k;	
		}
	
}
