#include<stdio.h>
#include<stdlib.h> 
 
#define OK 1
#define ERROR 0
 
typedef struct node
{
	int data;                		    //数据域 
	struct node *next;       		   //指针域 
}LinkQueueNode;
typedef struct
{
	LinkQueueNode *front;       	   //头指针 
	LinkQueueNode *rear;               //尾指针 
}LinkQueue;
 
/**********************各个子函数的定义*********************/
void initQueue(LinkQueue *Q);          //链队列初始化       
int enterQueue(LinkQueue *Q,int n);    //链队列入队操作 
void deleteQueue(LinkQueue *Q);        //链队列出队操作 
 
int main()
{
	LinkQueue Q;
	int choice;
	while(true)
	{
        printf("*****************Please enter your choice*****************\n\n");
        printf("                choice 1：Queue initialization\n");
        printf("                choice 2：Into the queue\n");
        printf("                choice 3：Out of the queue\n");
        printf("                choice 0：exit\n\n");
	 	scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				initQueue(&Q);
				break;
			case 2:
				int n;
				printf("Please enter the number into the queue elements：");
				scanf("%d",&n);
				(enterQueue(&Q,n)==1)?printf("%d个元素依次进队成功\n",n):printf("%d个元素依次进队失败\n",n);	
				break;
			case 3:
				deleteQueue(&Q);
				break;	
			case 0:
				exit(0);
				break;
			default:
				printf("ERROR！！\n");
				exit(0);
				break;
		}
	}
	return 0;
}
 
/**********************各个子函数功能的实现*********************/
void initQueue(LinkQueue *Q)   
{			//将 Q 初始化为一个空链队列 
	Q->front=(LinkQueueNode *)malloc(sizeof(LinkQueueNode));
	Q->rear=Q->front;
	Q->front->next=NULL;
}
 
int enterQueue(LinkQueue *Q,int n)  //进队列 
{
	LinkQueueNode *temp;
	int n1,n2;
	printf("Please enter into the queue elements in turn:\n");  
	for(n1=0;n1<n;n1++)
	{
		scanf("%d",&n2);
		temp=(LinkQueueNode *)malloc(sizeof(LinkQueueNode));
		if(temp==NULL) return ERROR;  //申请空间失败
		temp->data=n2;
		temp->next=NULL;
		Q->rear->next=temp; 
		Q->rear=temp;                 //队尾指针后移                    
	}
	return OK;
}
 
void deleteQueue(LinkQueue *Q)
{
	int a;
	LinkQueueNode *temp;
	if(Q->front==Q->rear)               //队为空，出栈失败 
	{
		printf("An empty Queue error!!!!\n");
	}
	else
	{
		temp=Q->front->next;
		a=temp->data;
		Q->front->next=temp->next;
		if(Q->front==temp)           //如果队中只有一个元素X，则X出队后成为空队 
		{
			Q->rear=Q->front;
		}
		free(temp);                            //释放存储空间 
		printf("队顶元素%d出队成功.\n",a);   
	}  
}
