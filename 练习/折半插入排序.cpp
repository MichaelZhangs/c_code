#include "stdio.h"
#include "stdlib.h"
int main(void)
{
	//ֱ�Ӳ������� 
	int a[10]={1,5,76,32,8,23,97,2,67,98};
	int len=10,high,mid,low,i,j,temp;
	for(i=2;i<len;i++)
	{
		temp=a[i];
		low=0;
		high=i-1;
		while(low<=high)
			{
				mid=(low+high)/2;
				if(a[i]< a[mid])	
					high=mid-1;
				else
					low=mid+1;	
			}
		for(j=i-1;j>=high+1;--j) 
			a[j+1]=a[j];
			a[high+1] = temp;		
	}
		for(i=0;i<len;i++)
			printf("%d ",a[i]);
//��һ����ʽ 
/*
 for (i = 1; i < array.length; i++) {
            int low = 0;
            int high = i - 1;
            insertNote = array[i];
            //���ϵ��۰�
            while (low <= high) {
                //�ҳ��м�ֵ
                int mid = (low + high) / 2;
                //��������м�ֵ
                if (array[i] > array[mid]) {
                    //�ڴ����м�ֵ���ǲ��ֲ���
                    low = mid+1;
                } else
                    //��С���м�ֵ���ǲ��ֲ���
                    high = mid-1;
            }
          //���������������
            for ( j=i; j > low; j--) {
                array[j] = array[j - 1];
            }
         //���뵽ָ����λ��
            array[low] = insertNote;
*/	
	return 0;
}

