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
	//s=&k;//ָ����Ϊ��������ʱ���β���Ȼ��Ϊʵ�θ�������ֵ���β�ָ�����ָ��Ӱ��
	//ʵ��ָ�����ָ�����Խ�����䣬��Ϊ3 
	*s = k;
	//��ַ���ι������βκ�ʵ��ָ��ͬһ����ַ�ռ䣬���ߵĸı䱣��ͬ��������������kֵ����
	//��ָ��sָ��ı��������ý�����m��*p��Ϊ5��ֵ�ı� 
}
int max(float x,float y)
{
	float z;
	z=x>y?x:y;
	return z;
	
}
