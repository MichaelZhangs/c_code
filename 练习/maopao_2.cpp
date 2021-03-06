#include<stdio.h>

int main(void)

{
   int  i, j, t;
   int n;
   printf("请输入数组的长度：");

   scanf("%d",&n);

   int a[n];

   printf("intput numbers:\n");

   for(i=0;i<n;i++) 

     scanf("%d",&a[i]);

   for(i=1;i<=n-1;i++)

      for(j=1;j<=n-i;j++)

	 	if(a[j-1]>a[j])

	    	{ t=a[j-1]; a[j-1]=a[j]; a[j]=t; }

 	printf("the sorted numbers:\n");

  				for(i=0;i<n;i++)  

    				  printf("%d  ",a[i]);

     			 printf("\n");

  return 0;	

}
