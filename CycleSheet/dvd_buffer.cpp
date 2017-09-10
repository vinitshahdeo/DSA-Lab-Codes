#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int tot=7;						//total no of characters which can be pushed on queue
struct queue	
{
	char arr[100];
	int front,rear;
}q1;
int isfull()					//general function for the operation for checking queue overflow
{
	if((q1.rear+1)%7==q1.front)
		return 1;
	else
		return 0;	
}		
int isempty()					//general function for the operation for checking queue underflow
{
	if((q1.front-1)%7==q1.rear)
		return 1;
 else
		return 0;
}
void enqueue(char a)				//funcion for enquing elements on queue
{
	int k=0;
	if(q1.rear==-1 && q1.front==-1)
	{
		q1.front=0;
	}
	q1.rear=(q1.rear+1)%7;
	q1.arr[q1.rear]=a;
}						
void dequeue(char *p)
{
	while(*p!='\0')
	{
		cout<<"Press key to read buffer\n";
		getch();
		cout<<"Data read:"<<q1.arr[q1.front]<<'\n';
		q1.arr[(q1.rear+1)%7]=*p++;
		q1.rear=(q1.rear+1)%7;
		cout<<"Buffer status\t";
		for(int i=0;i<7;i++)
			cout<<q1.arr[i]<<'\t';
		cout<<'\n';
		q1.front=(++q1.front)%7;
	}
	//cout<<"end1\n";
	do
	{
		cout<<"Press key to read buffer\n";
		getch();
		cout<<"Data read:"<<q1.arr[q1.front]<<'\n';
		q1.arr[q1.front]=' ';
		cout<<"Buffer status\t";
		for(int i=0;i<7;i++)
			cout<<q1.arr[i]<<'\t';
		cout<<'\n';
		q1.front=(++q1.front)%7;
	}
	while(!isempty());
	cout<<"end";
}
int main()
{
	q1.front=-1;
	q1.rear=-1;
	int n,k=0;
	char inp[100];
	printf("enter string\n");
	gets(inp);
	n=strlen(inp);
	while(!isfull())
	{	
		enqueue(inp[k]);
		k+=1;
	}
	dequeue(&inp[7]);
	return 0;
}
