#include<stdio.h>
#include<stdlib.h> 
 
#define OK 1
#define ERROR 0
 
typedef struct node
{
	int data;                		    //������ 
	struct node *next;       		   //ָ���� 
}LinkQueueNode;
typedef struct
{
	LinkQueueNode *front;       	   //ͷָ�� 
	LinkQueueNode *rear;               //βָ�� 
}LinkQueue;
 
/**********************�����Ӻ����Ķ���*********************/
void initQueue(LinkQueue *Q);          //�����г�ʼ��       
int enterQueue(LinkQueue *Q,int n);    //��������Ӳ��� 
void deleteQueue(LinkQueue *Q);        //�����г��Ӳ��� 
 
int main()
{
	LinkQueue Q;
	int choice;
	while(true)
	{
        printf("*****************Please enter your choice*****************\n\n");
        printf("                choice 1��Queue initialization\n");
        printf("                choice 2��Into the queue\n");
        printf("                choice 3��Out of the queue\n");
        printf("                choice 0��exit\n\n");
	 	scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				initQueue(&Q);
				break;
			case 2:
				int n;
				printf("Please enter the number into the queue elements��");
				scanf("%d",&n);
				(enterQueue(&Q,n)==1)?printf("%d��Ԫ�����ν��ӳɹ�\n",n):printf("%d��Ԫ�����ν���ʧ��\n",n);	
				break;
			case 3:
				deleteQueue(&Q);
				break;	
			case 0:
				exit(0);
				break;
			default:
				printf("ERROR����\n");
				exit(0);
				break;
		}
	}
	return 0;
}
 
/**********************�����Ӻ������ܵ�ʵ��*********************/
void initQueue(LinkQueue *Q)   
{			//�� Q ��ʼ��Ϊһ���������� 
	Q->front=(LinkQueueNode *)malloc(sizeof(LinkQueueNode));
	Q->rear=Q->front;
	Q->front->next=NULL;
}
 
int enterQueue(LinkQueue *Q,int n)  //������ 
{
	LinkQueueNode *temp;
	int n1,n2;
	printf("Please enter into the queue elements in turn:\n");  
	for(n1=0;n1<n;n1++)
	{
		scanf("%d",&n2);
		temp=(LinkQueueNode *)malloc(sizeof(LinkQueueNode));
		if(temp==NULL) return ERROR;  //����ռ�ʧ��
		temp->data=n2;
		temp->next=NULL;
		Q->rear->next=temp; 
		Q->rear=temp;                 //��βָ�����                    
	}
	return OK;
}
 
void deleteQueue(LinkQueue *Q)
{
	int a;
	LinkQueueNode *temp;
	if(Q->front==Q->rear)               //��Ϊ�գ���ջʧ�� 
	{
		printf("An empty Queue error!!!!\n");
	}
	else
	{
		temp=Q->front->next;
		a=temp->data;
		Q->front->next=temp->next;
		if(Q->front==temp)           //�������ֻ��һ��Ԫ��X����X���Ӻ��Ϊ�ն� 
		{
			Q->rear=Q->front;
		}
		free(temp);                            //�ͷŴ洢�ռ� 
		printf("�Ӷ�Ԫ��%d���ӳɹ�.\n",a);   
	}  
}
