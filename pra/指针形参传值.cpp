#include "stdio.h"
void f(int * s);
int max(float x,float y);
int k=5;

int main(void)
{
	int m=3,*p=&m;
	f(p);
	float c=5.340;
	printf("%f\n",c);
	printf("%d %d\n",m,*p);
	float a,b;
	scanf("%f%f",&a,&b); 
	printf("max=%d\n",max(a,b));
	
	
}
void f(int * s)
{
	//s=&k;//指针作为函数参数时，形参仍然作为实参副本被赋值，形参指针变量指向不影响
	//实参指针变量指向，所以结果不变，都为3 
	*s = k;
	//地址传参过程中形参和实参指向同一个地址空间，两者的改变保持同步。被调函数将k值赋给
	//了指针s指向的变量，调用结束，m和*p均为5，值改变 
}
int max(float x,float y)
{
	float z;
	z=x>y?x:y;
	return z;
	
}
