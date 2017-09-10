#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct queue
{
	int front,rear;
}q;
int sum=0;
void initialize()
{
	q.front=q.rear=-1;
}
void enqueue()
{
sum=sum+1;
if(sum==20)
{
cout<<endl<<"Ride Started";
for(int i=1;i<=20;i++)
void dequeue();
sum=0;	
}
else
{
	int count= 20-sum;
	cout<<endl<<"Ride not started,"<<count<<"people still required";
	q.rear++;
}
}
void dequeue()
{
if(q.front==q.rear)
cout<<endl<<"Queue empty";
else
{
	q.front++;
	}	
}
int main()
{
	int choice;
	initialize();
	do
	{
		cout<<endl<<"1.join the line"<<endl<<"2.get out of line"<<endl<<"3.number of people in queue"<<endl<<"4.exit";
		cout<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				cout<<sum;
				break;
			case 4:
				exit(0);
				
		}
	}while(choice!=4);
	getch();
}
