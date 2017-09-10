#include<iostream>
using namespace std;
struct queue
{
	int a[20];
	int front,rear;
}q;
void intilization()
{
	q.front=-1;
	q.rear=-1;
}
void enqueue(int item)
{
	if(q.rear==19)
	{
		cout<<"queue overflow"<<"\n";
		return;
	}
	q.rear++;
	q.a[q.rear]=item;
	cout<<"the inserted item is "<<q.a[q.rear]<<"\n"<<"the rear value is "<<q.rear<<"\n";
}
void dequeue()
{
	
	if(q.rear==19)
	{
	int item;
	if(q.rear==q.front)
	{
		cout<<"queue underflow"<<"\n";
		return;
	}
	q.front++;
	item=q.a[q.front];
    cout<<"deleted item is "<<item<<"\n"<<"the front value is "<<q.front<<"\n";
    }
    else
    cout<<"dequeue cannot be done"<<"\n";
}
void display()
{
	if(q.rear==-1)
	cout<<"there will no item for display"<<"\n";
	else
	{
	int i;
	for(i=q.front+1;i<=q.rear;i++)
	 cout<<"the presently item present in queue "<<q.a[i]<<"\n";
    }
}
void isfull()
{
	if(q.rear==19)
	 cout<<"queue full"<<"\n";
	else
	 cout<<"queue not full"<<"\n";
}
void isempty()
{
	if(q.rear==q.front)
	 cout<<"queue empty"<<"\n";
	else
	  cout<<"queue not empty"<<"\n";
}
main()
{
	int choice;
	int item;
	intilization();
	do
   {
	cout<<"enter the choice"<<"\n";
	cout<<"choice1=enqueue"<<"\n"<<"choice2=dequeue"<<"\n"<<"choice3=display"<<"\n"<<"choice4=isfull"<<"\n"<<"choice5=isempty"<<"\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			    cout<<"enter the item to be insert"<<"\n";
			    cin>>item;
			    enqueue(item);
			    break;
		case 2:
			    dequeue();
			    break;
		case 3:
			    display();
			    break;
		case 4:
			    isempty();
			    break;
		case 5:
			    isfull();
			    break;
	}
   }while(choice<=5);
}
