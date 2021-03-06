#include "stdio.h"
#include "stdlib.h"
int main(void)
{
	//直接插入排序 
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
//另一种形式 
/*
 for (i = 1; i < array.length; i++) {
            int low = 0;
            int high = i - 1;
            insertNote = array[i];
            //不断的折半
            while (low <= high) {
                //找出中间值
                int mid = (low + high) / 2;
                //如果大于中间值
                if (array[i] > array[mid]) {
                    //在大于中间值的那部分查找
                    low = mid+1;
                } else
                    //在小于中间值的那部分查找
                    high = mid-1;
            }
          //将整体数组向后移
            for ( j=i; j > low; j--) {
                array[j] = array[j - 1];
            }
         //插入到指定的位置
            array[low] = insertNote;
*/	
	return 0;
}

