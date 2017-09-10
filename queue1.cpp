#define MAX 20
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct queue
{
	int a[20];
	int front,rear;
}q;
void initialize()
{
	q.front=-1;
	q.rear=-1;
}
void enqueue(int item)
{
	if(q.rear== MAX-1)
	{
		cout<<"queue overflow";
		return;
	}
	else
	{
		q.rear++;
		q.a[q.rear]=item;
	}
}
int dequeue()
{
	if(q.front==q.rear)
	{
		cout<<"queue underflow";
		return -9999;
	}
	else
	{
		q.front++;
		return(q.a[q.front]);
	}
}
int isfull()
{
	if(q.rear== MAX-1)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(q.front==q.rear)
	return 1;
	else
	return 0;
}
void display()
{
	int i;
	for(i=q.front+1;i<=q.rear;i++)
	cout<<q.a[i];

}
int main()
{
	int choice,num;
	do
	{
	cout<<endl<<"1.enqueue"<<endl<<"2.dequeue"<<endl<<"3.is full"<<endl<<"4.is empty"<<endl<<"5.display"<<endl<<"6.exit";
		cout<<endl;
		cin>>choice;
		switch(choice)
			{
				case 1:
					cout<<"enter the number to be enqueued";
					cin>>num;
					enqueue(num);
					break;
				case 2:
					num=dequeue();
					cout<<"deleted element is"<<num;
					break;
				case 3:
					isfull();
					break;
				case 4:
					isempty();
					break;
				case 5:
					display();
					break;
				case 6:exit(0);
			}
			
	}while(choice>=1 && choice<=6);
	getch();
}
