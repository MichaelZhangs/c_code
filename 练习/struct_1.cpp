#include <stdio.h>
#include <string.h>
#include <math.h>

struct list{
	
	char name[4];
	int score[3];
	
};

int main(void)
{
	struct list stu;
	printf("pls input name and score\n");
	int sum=0;
	float ave=0;
	scanf("%s",stu.name);
	scanf("%d%d%d",&stu.score[0],&stu.score[1],&stu.score[2]);

	sum=stu.score[0]+stu.score[1]+stu.score[2];
	ave=sum/3;
	printf("%s\t %d\t %.2lf\t",stu.name,sum,ave);
	
	return 0;
}
